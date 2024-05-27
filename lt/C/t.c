#include<stdio.h>
int addFunc(int, int);
int mulFunc(int, int);

int main()
{

int (*pf)(int,int); //Khai báo
int c = 1;


printf("Chon ham (1:ham +, 2:ham *, 0: thoat):");
if (c==0) 
{
	
}else if (c==1){
	pf = addFunc; //Gán
}else 
{
	pf = mulFunc;
}

int result1,result2;
/* Goi ham qua con tro */
result1 = pf(15,20); //Gọi hàm
/* Goi ham theo cach dung tham
chieu nguoc ve ham goc*/
result2 = (*pf)(15,20);
printf("result1 = %d result2 =%d\n",result1,result2);


}

int addFunc(int x, int y)
{
return x+y;
}
int mulFunc(int x, int y)
{
return x*y;
}