#include <stdio.h>
#include <stdlib.h>
#include "MyLibs.h"
int main(int argc, char *argv[])
{
  //float sum(float [], int);
  float x[N] = {1,3,5,7,9,11};
  float y[N] = {2,4,6,8,10,12};
  float s1 = sum (x,N);
  float s2 = sum (y,N);
  printf("Tong cua day so 1 =%.0f\n",s1);
  printf("Tong cua day so 2 =%.0f\n",s2);  
  printf("USCLN cua tong 2 day = %d\n", uscln((int)s1,(int)s2));
  system("PAUSE");	
}
