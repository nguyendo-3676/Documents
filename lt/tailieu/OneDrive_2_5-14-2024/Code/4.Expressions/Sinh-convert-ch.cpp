#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	printf("enter symbol: ");
	scanf("%c", &ch);
	if (ch >= 97 && ch <= 122) {
	ch = ch - 32;
	printf("Thuong sang hoa: %c\n", ch);
	}
	else if (ch>= 65 && ch <= 90)
	{
	ch = ch + 32;
	printf("Hoa sang thuong: %c", ch);
}
return 0;
}
