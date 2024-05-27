#include <stdio.h>
#include<conio.h>
#include <math.h> /*Thu vien toan hoc, chua ham tinh can bac 2*/
main()
{  int  x; 	
   float  ketqua;    
   int i;
   char  ch;
   for (; ;) {
      printf("\nHay nhap mot so nguyen :");
      scanf("%d",&x); 
      ketqua = pow(x,1.0/2);  
      printf("Can bac 2 cua %d = %+3.2f \n", x, ketqua);
      printf("Tiep tuc khong? Y/N");
      ch= getche();
      if (ch == 'n' || ch == 'N') break;
   }
} //Ket thuc chuong trinh

