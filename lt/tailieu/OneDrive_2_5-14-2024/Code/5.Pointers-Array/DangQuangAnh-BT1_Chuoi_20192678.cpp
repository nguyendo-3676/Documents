#include <stdio.h>
#include <string.h>
#include<cstdlib>
int main ()
{
	char s1[100], s2[100];
	int i, dodai, nbelements;
	printf ("Nhap chuoi s1: \n");
	gets (s1);
	dodai = strlen (s1);
	nbelements=sizeof(s1);
	printf ("Do dai: %d nbelements: %d\n ", dodai, nbelements);
	for (i = 0; i < dodai; i++)   
		{
			s2[i]=s1[i];  
		}
		s2[dodai]='\0';
	printf("Chuoi s2 duoc sao chep la: %s",s2);

	return EXIT_SUCCESS;
}
