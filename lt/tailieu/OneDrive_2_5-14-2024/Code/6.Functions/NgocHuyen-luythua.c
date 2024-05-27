#include <stdio.h>
double pow (double x, int n)
{
	int i;
	double p=1;
	if (n==0) return p;
	else if (n>0)
	{
		for (i=1; i<=n; i++)
		p = p*x;
		return p;
	}
	else 
	{
	    for (i=1; i<=-n;i++)
	    p=p*x;
	    p=1/p;
	    return p;
	}
}
double pow2 (double x, int n)
{
	double p2=1;
	if (n==0) return p2;
	else return x*pow2 (x, n-1);
}
void pow3(double x, int n, double *result)
{
	double tmp;
	if(n==0)
	*result=1.0;
	else 
	{
	pow3(x,n-1,&tmp);
	*result = tmp*x;
	}	
}
int main ()
{
	double x;
	int y;
	double*r=(double*) malloc(sizeof(double));
	printf ("Nhap co so: "); scanf ("%lf", &x);
	printf ("Nhap so mu nguyen: "); scanf ("%d", &y);
	*r=1; 
	pow3(x,y,r);
	printf ("Luy thua can tinh la %lf", *r);
	free(r);
	return 0;
}

