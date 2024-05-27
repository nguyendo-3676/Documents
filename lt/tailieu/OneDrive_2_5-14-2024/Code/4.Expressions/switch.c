#include <stdio.h>
#include <conio.h>
void main() {
	char ch;
	printf("Nhap gia tri ch=");
	scanf("%c",&ch);
	switch (ch){
		case 'a': printf("Ki tu a da duoc nhap");break;
		case 'b': printf("Ki tu b da duoc nhap");break;
		default: printf("Ki tu khac a va b da duoc nhap");
	}
	getch();
}

