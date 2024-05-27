#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a, &b, &c);
//	if(a>b){
//		if(b>c)
//		printf("%d",c);
//		else
//		printf("%d",b);
//	}
//	else{
//		if(a>c)
//		printf("%d",c);
//		else
//		printf("%d",a);
//	}
	int min;
	if(a <b)
	{
		min = a;
	}
	if( c<min)
	{
		min = c;
	}
	printf("\nVay min trong 3 so a,b, c la: %d", min);
	return 0;
}
