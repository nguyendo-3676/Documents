#include <stdio.h>
#include <stdlib.h>

void sum(float a[], int N, float* s)
{
	int i;
	float sf=0;
	for (i=0;i<N;i++) sf += a[i];
	*s = sf;
}
float sum1(float a[], int N)
{
	int i;
	float sf=0;
	for (i=0;i<N;i++) sf += a[i];
	return sf;
}
int main()
{
	void sum(float a[], int N, float* s);
	float sum1(float a[], int N);
	
	int nbelements; 
	float sum_arr; 
	printf("Nhap so phan tu : ");
	scanf("%d", &nbelements);
	float*arr=(float*)malloc(nbelements*sizeof(float));
	for(int i=0; i<nbelements;i++) 
	{
		printf("Nhap phan tu thu %d\n", i); 
		scanf("%f", &arr[i]);		
	}
	
	printf("Sum of array is %0.3f\n", sum1(arr, nbelements));
	sum(arr, nbelements, &sum_arr);
	printf("Sum of array is %0.3f\n", sum_arr);
    return 0;
	
}
