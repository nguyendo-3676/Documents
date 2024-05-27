#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>


#define MAX(a, b) ((a)>(b)? (a) : (b))

#define MYDIV(x,y)  x/y 
void myreverse(char []);

using namespace std;
class HP {
private:
    char TenHP[50]; 
    int SoTC;
    char MaHP[50]; 
public:
    HP(char ten[50], int sotc, char mahp[50])
    {
		strcpy(TenHP,ten);
		SoTC=sotc;
		strcpy(MaHP,mahp);
	}
	
    bool check()
    {
    	bool ok=false;
    	if((MaHP[0]=='E')&&(MaHP[1]=='T') )ok=true;
    	return ok;
	}

    void display() {
    	cout<<TenHP<<" "<<SoTC<<"  "<<MaHP;
    	
    	

    }
};


void fff(int& x, int y = 4) 
{
	 x-=y;
}

void fff2(int x, int y = 4) {
	 printf("%d", (x - y));
}

void myreverse(char inputText[])
{
	int length=strlen(inputText);
	for (int i=length-1;i>=0;i--)
	printf("%c", inputText[i]);
}
int main()
{
	
	

//	   char StudentName[50];  // defining a char array
//       cout << "Please enter Your Name: ";
//       cin.getline ( StudentName, 50, '\n' );   //input from keyboard
//       cout<< StudentName;
      
   

		
/*
       HP hp1("Lap trinh",2,"ET120");
       hp1.display();
       if(hp1.check()) cout<<"Vien DTVT";
      
       
       short *p1, *p2, m[30];
		p1=m+5; p2=m+10;
				
		printf("Print %d\n", p1-p2);
		 return 0;
*/
/*
	int n=130+a;
	int count=0;
	while(n>=10){
	        n/=10; 
	        count++;
	    }
	printf("\n %d \n ", count+1);
	*/
	/*
cout<<"Cau..."<<endl;	
	switch ((a+2)%3) {
   case 0: printf("0 \n"); break;
   case 1: printf("1 \n"); break;
   case 2: printf("2 \n"); break;
   default: printf("default \n");
}
*/
/*
	cout<<"Cau..."<<endl;	
	char c='A';
	printf("%d", c+a); //In ra ma ASCII
	printf("%c", c+a); //In ra ky tu
	c=c+a;
	cout<<c;//In ra ky tu
	cout<<c+a; //In ra ma ASCII
*/
/*
cout<<"Cau..."<<endl;
char str[] = {'a', 'b', 'c', 'd', 'e'};
for(int i=0;i<5;i++) str[i]+=a;
printf("%c\n", str[0]);
printf("%s", str);
*/


int a=6;
printf("So la %d\n", MYDIV(a+2, a+3));
char c = (a >> 1) | a;
printf("%c\n", c);

/*
int *p, m[30]; 
p=m+(29-a); 
for(int i=0;i<30;i++)
{
	m[i]=a+i;
	printf ("%d    " , m[i]);
}
printf("%d\n", *p);	
*/

char myword [] = "Hello"; 
char myword2[]={'H', 'e','l','l','o','\0'};
myreverse(myword2);
string mystring;

printf("%d", sizeof(myword)/sizeof(char));
//myword="chao ban"; //Loi chuong trinh
//In ra chuoi
//char myword3[];
//myword3="Xin chao ban";
//sprintf(myword,"Khong biet doan van ban nay dai den bao nhieu");
//printf("%s\n", myword);

//  char szInput[256];
//  printf ("Enter a sentence: ");
//  gets (szInput);
//  printf ("Size of array %d.\n",sizeof(szInput)/sizeof(char));
//  printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
//
// char szInput[256];
////  //int sprintf ( char * str, const char * format, ... );
// int count=sprintf(szInput, "%s%d.txt", "Test",2) ;
// 
// cout<<szInput;
// printf("%s\n",szInput);
// printf("Nb characters %d %d\n", count, strlen(szInput));
// for(int i=0;i<strlen(szInput);i++) printf("%c", szInput[i]);
//cout<<endl;
//int char_length=sizeof(myword)/sizeof(char);
//printf("Size of %d  %d: ", char_length, strlen(myword));
//
//for(int i=0;i<char_length;i++)
//printf("%c ", myword[i]);
////
//mystring=myword;
//cout<<endl<<mystring;
//int n = mystring.length();    
//char char_array[n + 1];
//
//strcpy(char_array, mystring.c_str());
//printf("%s", char_array);
 float arr[5+a];	 
float* p = arr; 
printf("%d\n", sizeof(arr));
printf("%d\n", sizeof(p));

   

}
