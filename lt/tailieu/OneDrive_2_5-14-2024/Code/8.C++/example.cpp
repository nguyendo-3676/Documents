#include <cstdlib> //Cho EXIST_SUCCESS
#include <iostream>   //t?p th� vi?n nh?p/xu?t ch�nh trong C++
using namespace std; //Khai b�o kh�ng gian t�n m?c �?nh
void PrintX(int value)
{
	cout<<"Gia tri la: "<<value<<endl;
}
void PrintX (int* value)
{
		cout<<"Gia tri la: "<<*value<<endl;
}


int main()
{
	//bool check=true;
	// if(check)  cout<<"Gia tri dung"<<endl;
	int x=5;
	int *y = &x;
	PrintX(x);
	PrintX(y);
    system("PAUSE");
    return EXIT_SUCCESS;
}

