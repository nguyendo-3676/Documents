#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *t;
 int k=0,dem=0;
 t=fopen("D:\\Teaching\\C-C++-06K64C\\Code\\7.Files\\Data\\toan.txt","r");
 if(t==NULL)
 {
  printf("error");
  exit(0);
 }
 char c;
 do
 {
  c=getc(t);
  if((c>='a' && c<='z' )||(c>='A' && c<='Z'))k=1;
  if((c==' ' || c=='\t' || c==10 || c==EOF)&&k==1 )
  {
   dem++;
   k=0;
  }
 }while(c!=EOF);
 printf("so tu = %d\n",dem);
 return 0;
}
