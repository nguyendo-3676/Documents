#include<stdio.h>
#include<string.h>
int main() 
{
	char m[20];
	printf("Nhap vao 1 chuoi ki tu :");
	gets(m);
//	for (int i=0 ;i<6; i++)
//	{
//	if (m[i]>=97&&m[i]<=122)
//	{
//	m[i] = m[i] - 32;
//	}
//	} printf("Thuong thanh hoa : %s", m);
//	}
	char *p = m;
	for (int i = 0; i < 6; i++) 
	{
		if((*(p+i) >= 'a') && (*(p+i) <= 'z')) 
		{
		*(p+i) = *(p+i) - 32;
		printf("%c ", *(p+i));
		}
	}
}



