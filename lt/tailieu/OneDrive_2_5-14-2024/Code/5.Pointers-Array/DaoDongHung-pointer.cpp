#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=1,t;
	int *a=(int*)malloc((i+1)*sizeof(int));
	do
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		printf("\nNhap tiep khong?\n");
		scanf("%d",&t);
		if (!t)
			break;
		++i;
		a=(int*)realloc(a,(i+1)*sizeof(int));
	} while (1);
	for (int j=1;j<=i;++j)
		printf("%d ",a[j]);
}
