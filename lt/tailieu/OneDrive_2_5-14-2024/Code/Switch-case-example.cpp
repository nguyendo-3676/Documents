
/*Example of switch-case
Modify the code so that A/a or B/b will be accepted
*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main() {
	char ch, ch_converted;
	printf("Nhap gia tri ch=");
	scanf("%c",&ch);
	ch_converted=putchar(tolower(ch));
	switch (ch_converted)
	{
		
		case 'a': 
		{
			printf("Ki tu a da duoc nhap");
			break;
		}
		case 'b': printf("Ki tu b da duoc nhap");break;
		default: printf("Ki tu khac a va b da duoc nhap");
	}
	getch();
	return 0;
}

