#include<stdio.h>
int main(){
	int a,b,c,min;
	scanf("%d %d %d",&a, &b, &c);
	if(a>b){
		if(b>c)
		printf("%d",c);
		else
		printf("%d",b);
	}
	else{
		if(a>c)
		printf("%d",c);
		else
		printf("%d",a);
	}
	
//	int min;
//	if(a <b)
//	{
//		min = a;
//	}
//	else 
//	{
//		min=b;
//	}
//	if( c<min)
//	{
//		min = c;
//	}
	printf("\nVay min trong 3 so %d %d %d la: %d\n", a, b, c, min);
	return 0;
}
