#include <stdio.h>
#include<conio.h>

main()
{  

   char  ch;
   for (; ;) 
   {
      printf("Tiep tuc khong? Y/N");
      ch= getche();
      if (ch == 'n' || ch == 'N') break;
   }
} 
