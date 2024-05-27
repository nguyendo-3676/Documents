#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>
using namespace std;
int a=0;


void fff(int& x, int y = 4) 
{
	 x-=y;
}

int evenNb(int* arr, int nbelements)
	{
		int nbofeven=0;
		for(int i=0;i<nbelements;i++)
		if(arr[i]%2==0) nbofeven++;
		return nbofeven; 
	}
	
void myreverse(char inputText [])
{
	int length=strlen(inputText);
	for (int i=length-1;i>=0;i--)
	printf("%c", inputText[i]);
}

class HP {
private:
    char TenHP[50]; 
    int SoTC;
    char MaHP[6]; 
public:
	HP()
    {
		strcpy(TenHP,"");
		SoTC=0;
		strcpy(MaHP,"");
	}
	
    HP(char ten[50], int sotc, char mahp[6])
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
	int khoikienthuc()
	{
		return MaHP[2]-48;
	}
    void display() {
    	cout<<MaHP<<" "<<TenHP<<" "<<SoTC<<endl;;   	

    }
    void GetHP()
    {
    	cout<<"Nhap ma hoc phan: "<<endl;
    	
    	cin.ignore(256, '\n'); 
    	cin.getline (MaHP, 6 ); 
    
    //	gets (MaHP);
    	cout<<"Nhap ten hoc phan: "<<endl;
		cin.ignore(256, '\n');  
    	cin.getline (TenHP, 50 ); 
    
    //	gets(TenHP);
    	cout<<"Nhap so tin chi: "<<endl;
    	cin>>SoTC;      
    	
	}
	void SetHP(char ten[50], int sotc, char mahp[6])
    {
 		strcpy(TenHP,ten);
		SoTC=sotc;
		strcpy(MaHP,mahp); 
    	
	}
	int GetTC() {return SoTC;}
};
int nbHP(HP*arr_hp, int nbelements, int soTC, int maKKT)
{
	int count=0;
	for(int i=0;i<nbelements;i++)
	if((arr_hp[i].khoikienthuc()==maKKT) &&(arr_hp[i].GetTC()==soTC)) count++;
	return count;
}
int main()
{
	cout<<"**************************************************************"<<endl;
	cout<<"Cau 1:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;
	
	float m[]={1.2,2.4,3.6,4.4,5.1,0.2};
	printf("Gia tri %d:", sizeof(m)/sizeof(m[0]));
	cout<<endl;
	
	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 2:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	char str[] = {'f', 'b', 'c', 'd', 'e'};
	for(int i=0;i<5;i++) str[i]+=a;
	printf("%s\n", str);
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 3:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	int* m_c3=new int[a+1];
	for(int i=0;i<a+1;i++) m_c3[i]=i+1;
	printf("%d", m_c3[0]);
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"Cau 4:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	int n=130+a;
	int count=0;
	while(n>=10){
	        n/=10; 
	        count++;
	    }
	printf("%d", count+1);
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 5:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	char c='B';
	printf("%c", c+a);
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 6:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	float arr[5+a];	
	float* p = arr; 
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(p));
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 7:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	int*arr_c7=new int[10];
	for(int i=0;i<10;i++) arr_c7[i]=i+1;
	printf("%d", evenNb(arr_c7,10));
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 8:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	int x = a;
	fff(x,2);
	printf("%d\n",x);
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 9:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	switch ((a+2)%3) {
	case 0: printf("0 \n"); break;
	case 1: printf("1 \n"); break;
	case 2: printf("2 \n"); break;
	default: printf("default \n");
	}
	cout<<endl;
	cout<<"**************************************************************"<<endl;	
		
	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 10:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	int *p_c10, m_c10[30]; 
	p_c10=m_c10+(29-a); 
	for(int i=0;i<30;i++)  m_c10[i]=a+i;	
	printf("%d\n", *p_c10);
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 11:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	float* s = (float*)malloc(40+a);
	printf("%d", sizeof(s));
	cout<<endl;
	cout<<"**************************************************************"<<endl;	
	
	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 12:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	for (x=a; x<a+10; x++) {
	if (x == a+7) continue;
	printf("%d ", x);
	}	
	cout<<endl;
	cout<<"**************************************************************"<<endl;	
	
	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 13:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	char c_c13 = (0xF4 >> 1) | a;
	printf("%c", c_c13);	
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 14:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	char myword [] = "Mon ky thuat lap trinh"; 
	myreverse(myword);
	cout<<endl;
	cout<<"**************************************************************"<<endl;	

	cout<<"**************************************************************"<<endl;	
	cout<<"Cau 15:"<<endl;	
	cout<<"---------------------------------------------------------------"<<endl;	
	enum cmd {toyota=0,honda,suzuki,mazda};
	enum cmd brandname = mazda;
	printf("%d", suzuki);
	cout<<endl;
	cout<<"**************************************************************"<<endl;	


	cout<<"**************************************************************"<<endl;	
	cout<<"Cau bai tap lon:"<<endl;	
    HP c1("Lap trinh",(a+1)%3,"ET120");
    c1.display();
	HP* ptr_hp=new HP[a+3];
	char maHP[6];
	char tenHP[50];
	int tc;
	/*
	for(int i=0;i<a+3;i++) 
	{
		cout<<"Nhap hoc phan thu: "<<i+1<<endl;
		cout<<"Nhap ma hoc phan: ";    	
 //   	cin.ignore(); 
    	fgets(maHP, 6, stdin);
//    	cin.getline (maHP, 6 );  
	   	cout<<"Nhap ten hoc phan: ";
	   	//cin.ignore(1); 
//	   	cin.ignore();
	   	fgets(tenHP, 50, stdin);
//    	cin.getline (tenHP, 50 ); 
    	cout<<"Nhap so tin chi: ";    	
    	cin>>tc;   
    	cout<<maHP<<" "<<tenHP<<" "<<tc<<endl;
	//	ptr_hp[i].SetHP(tenHP,tc,maHP);
		
	}
	*/
	ptr_hp[0].SetHP("Xu ly anh", 3, "ET1222");
	ptr_hp[1].SetHP("Xu ly tieng noi", 3, "ET1222");
	ptr_hp[2].SetHP("Vi xu ly", 3, "ET2222");
	
	cout<<"So hoc phan thuoc chuong trinh: "<<nbHP(ptr_hp, a+3, 3, 2)<<endl;
	cout<<endl;	
	cout<<"**************************************************************"<<endl;	

}
