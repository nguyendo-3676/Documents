#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
printf("Nhap 1 so N: ");
scanf("%d", &n);
int* p = (int*) malloc(n*sizeof(int));
printf("Nhap cac so cho mang:");
for (int i=0;i<n;i++){
	scanf("%d", &p[i]);
}
for (int i=n-1;i>=0;i--)
{
	printf("%d ", p[i]);
}
return 0;
}
