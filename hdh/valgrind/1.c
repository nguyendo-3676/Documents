#include<stdio.h>
#include<stdlib.h>

int main(){
char* string = malloc (8 * sizeof(char));
//LEAK free not called.
printf("I am running \n");
return 0;
}
