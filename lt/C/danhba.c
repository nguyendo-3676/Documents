#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100
#define NAME_LEN 50
#define PHONE_LEN 15

typedef struct {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
} Contact;

Contact contacts[MAX_CONTACTS];
int contact_count = 0;

void log_action(const char *action) {
    FILE *logfile = fopen("app.log", "a");
    if (logfile == NULL) {
        printf("Unable to open log file.\n");
        return;
    }
    fprintf(logfile, "%s\n", action);
    fclose(logfile);
}

void add_contact(const char *name, const char *phone) {
    if (contact_count >= MAX_CONTACTS) {
        printf("Contact list is full.\n");
        log_action("Failed to add contact: list is full.");
        return;
    }
    strcpy(contacts[contact_count].name, name);
    strcpy(contacts[contact_count].phone, phone);
    contact_count++;

    char log_message[100];
    sprintf(log_message, "Added contact: %s, %s", name, phone);
    log_action(log_message);
}

void display_contacts() {
    if (contact_count == 0) {
        printf("No contacts found.\n");
        log_action("Displayed contacts: No contacts found.");
    } else {
        for (int i = 0; i < contact_count; i++) {
            printf("Contact %d: %s, %s\n", i + 1, contacts[i].name, contacts[i].phone);
        }
        char log_message[50];
        sprintf(log_message, "Displayed contacts: %d contacts", contact_count);
        log_action(log_message);
    }
}

void search_contact(const char *name) {
    int found = 0;
    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Found contact: %s, %s\n", contacts[i].name, contacts[i].phone);
            found = 1;
        }
    }
    if (!found) {
        printf("No contacts found with name: %s\n", name);
        char log_message[50];
        sprintf(log_message, "Search contact: No contacts found with name %s", name);
        log_action(log_message);
    } else {
        char log_message[50];
        sprintf(log_message, "Search contact: Found contacts with name %s", name);
        log_action(log_message);
    }
}

void delete_contact(const char *name) {
    int initial_count = contact_count;
    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (int j = i; j < contact_count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contact_count--;
            i--; // to check the new contact in the current position
        }
    }
    if (initial_count == contact_count) {
        printf("No contact found with name: %s\n", name);
        char log_message[50];
        sprintf(log_message, "Delete contact: No contact found with name %s", name);
        log_action(log_message);
    } else {
        printf("Deleted contact(s) with name: %s\n", name);
        char log_message[50];
        sprintf(log_message, "Deleted contact(s): %d contact(s) with name %s", initial_count - contact_count, name);
        log_action(log_message);
    }
}

int main() {
    int choice;
    char name[NAME_LEN];
    char phone[PHONE_LEN];

    while (1) {
        printf("\nContact Manager\n");
        printf("1. Add contact\n");
        printf("2. Display all contacts\n");
        printf("3. Search contact by name\n");
        printf("4. Delete contact by name\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter phone: ");
                scanf("%s", phone);
                add_contact(name, phone);
                break;
            case 2:
                display_contacts();
                break;
            case 3:
                printf("Enter name to search: ");
                scanf("%s", name);
                search_contact(name);
                break;
            case 4:
                printf("Enter name to delete: ");
                scanf("%s", name);
                delete_contact(name);
                break;
            case 5:
                log_action("Exited the program.");
                exit(0);
            default:
                printf("Invalid option, please try again.\n");
        }
    }

    return 0;
}
