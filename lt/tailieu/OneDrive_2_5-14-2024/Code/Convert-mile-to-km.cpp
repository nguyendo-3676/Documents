//Convert from mile, yard to km
#include <stdio.h>
int main(){
	double km;
	double mi=26;
	double yd=385;
	km=1.609*(mi+yd/1760);
	printf("%lf",km);
	return 0;
}

