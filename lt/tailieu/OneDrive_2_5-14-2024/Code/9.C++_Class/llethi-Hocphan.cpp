#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <inttypes.h>
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

int main()
{

//	   char StudentName[50];  // defining a char array
//       cout << "Please enter Your Name: ";
//       cin.getline ( StudentName, 50, '\n' );   //input from keyboard
//       cout<< StudentName;
      
       char* test=new char[255];

       //scanf("%s\n", test);
       int a=6;
       	int *ptr=new int[100+a];
       	printf("%d\n", sizeof(ptr));
       	float arr[5+a];	
		float* p = arr; 
		printf("%d %d\n", sizeof(arr), sizeof(p));
		
		char c='A';
		printf("%c", c+a);
		
/*
       HP hp1("Lap trinh",2,"ET120");
       hp1.display();
       if(hp1.check()) cout<<"Vien DTVT";
      
       
       short *p1, *p2, m[30];
		p1=m+5; p2=m+10;
				
		printf("Print %d\n", p1-p2);
		 return 0;
*/
}
