#include <cstdlib> //Cho EXIST_SUCCESS
#include <iostream>   //t?p thý vi?n nh?p/xu?t chính trong C++
using namespace std; //Khai báo không gian tên m?c ð?nh
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

