#include "myLib.h"
int uscln(int a, int b)
{
   while(a!=b)
 		if(a>b) a -= b;
	   else b -= a;
	return a;	
}
float sum(float a[], int n)
{
	int i;
	float sf=0;
	for (i=0;i<n;i++) sf += a[i];
	return sf;
}

