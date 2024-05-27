#include <stdio.h>

int main() {
	double a[] = {1, 3, 5, 7};
	double b[] = {2, 4, 5, 6, 7, 8, 10};
	double*c ;

	int na = sizeof(a)/sizeof(a[0]),
		nb = sizeof(b)/sizeof(b[0]),
		nc = na+nb;
	int i, j, k;

	c = (double*)malloc(nc*sizeof(double));

	for (i=0, j=0, k=0; k<nc; k++) 
	{
		if (i==na) c[k] = b[j++];
		else if (j==nb) c[k] = a[i++];
		else if (a[i] < b[j]) c[k] = a[i++];
		else c[k] = b[j++];
	}

	printf("Mang da tron: \n");
	for (k=0; k<nc; k++)
		printf("%g ", c[k]);

	free(c);
	return 0;
}
