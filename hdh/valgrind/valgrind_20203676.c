#include <stdio.h>
#include <stdlib.h>

// Khai báo biến struct
struct sinhvien {
    char name[50];
    int id;
    char address[100];
    char phone[20];
};

int main() {
    // Cấp phát nhiều lần
    struct sinhvien *sinhvien1 = malloc(sizeof(struct sinhvien));
    if (sinhvien1 == NULL) {
        printf("Không đủ bộ nhớ!\n");
        return 1;
    }

    // Gán giá trị cho biến
    sprintf(sinhvien1->name, "Trinh Do");
    sinhvien1->id = 20203676;
    sprintf(sinhvien1->address, "Doc Tin, Ha N");
    sprintf(sinhvien1->phone, "0975462068");

    // Sử dụng biến...
    
    printf("Trinh Do 20203676\n");

    return 0;
}
