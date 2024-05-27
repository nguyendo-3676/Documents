#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include"struct.h"

void taoToadodiem(Toado *diembatky);


int main(int argc, char *argv[])
{

	Toado diembatkycuatoi[10];

	for (int i = 0; i < 10; i++)
	{

		taoToadodiem(&diembatkycuatoi[i]);

	}
	
	for(int i = 0; i<10 ; i++)
	{

		printf("toa do diem thu %d: (%d,%d), %p \n",i+1, diembatkycuatoi[i].x,diembatkycuatoi[i].y, diembatkycuatoi[i].hihi);

	}

	
	return 0;
}


void taoToadodiem(Toado *diembatky)
{
	diembatky -> x = (diembatky -> x) +1; 
	diembatky -> y = (diembatky -> y) +1;
	diembatky -> hihi = NULL;

}






