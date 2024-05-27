#include<stdio.h>
#include<string.h>

int main(){
	char str1[30];
	char str2[30];
	printf("Nhap chuoi s1 : ");
	gets(str1);
	printf("\nNhap chuoi s2 : ");
	gets(str2);
	int L1 = strlen(str1);
	int L2 = strlen(str2);
	if(L1!=L2)
		{
			printf("\n Hai chuoi khac khau : ");
		}
	else
		{
			int mark=0;
			for( int i = 0 ; i < L1 ; i ++ ){
				if( str1[i] != str2[i] )
					{
						printf("Hai chuoi khac nhau : ");
						mark=1;
						break;					
					}
			}
			if(mark==0)
			{
				printf("\n Hai chuoi giong nhau : ");
			}			
		}	
	return 0;
}


























