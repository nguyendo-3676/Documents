#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

	int tuoi = 10;
	int *pointerTuoi = &tuoi;

	printf("Dia  chi cua bien so tuoi la: %p", &tuoi);


	double *pointer1 = &pointerTuoi;

	printf("gia tri cua pointerTuoi la: %p", *pointer1);

	
	return 0;


}
