#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

	long tuoi = 0;
	long tien = 0;


	printf("so tien ban co la: \n");
	scanf ("%ld", &tien);
	printf("tuoi cua ban la: \n");
	scanf ("%ld", &tuoi);


	
	if (tuoi > 30 && tien > 100000)
{
printf("Chao mung ban den voi chung toi !");
}
else
{
printf("Cut !");
}

return 0;
}


