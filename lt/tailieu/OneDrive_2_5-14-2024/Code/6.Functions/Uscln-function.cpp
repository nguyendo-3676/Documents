#include<iostream>
using namespace std;



int uscln(int a, int b)
{
   while(a!=b)
 	if(a>b) a -= b;
	else b -= a;
   return a;
}

void uscln2(int a, int b, int* u)
{
   while(a!=b)
 	if(a>b) a -= b;
	else b -= a;
   *u = a;	
}

int main(){
	int s1,s2,i;
	int *u=&i;
	cout<<"Nhap s1: ";
	cin>>s1;
	cout<<"Nhap s2: ";
	cin>>s2;
	
	max=uscln(s1,s2);
    cout<<"uscln la: "<<max;
    
    uscln2(s1,s2,&i);
    cout<<"uscln2:"<<i;
    return 0;
	
}
