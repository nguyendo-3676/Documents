#include<stdio.h>
#include<stdlib.h>


double PowR(double x, int n){
	if( n == 0) return 1;
	if ( n > 0) {
		return	x*PowR(x,n-1);
	}
	if ( n < 0){
		return 1/x*PowR(x,n+1);
	}
}
double Pow(double x, int n){
	double ketqua;
	if (n==0) return 1;
	else
	{
		ketqua=x;
	for (int i=0;i<n-1;i++)
	ketqua=ketqua*x;
	return ketqua;
	}
	}


int main(){
	printf("%f\n",PowR(3,3));
	printf("%f\n",Pow(3,3));
}
