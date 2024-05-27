#include <iostream>
#include <vector>

using namespace std;

template <class T>
	void myswap(T& a, T& b) 
	{
		T c = a; a = b; b = c; 
	}


	void swapnumber(int& a, int& b) 
	{
		int c = a; a = b; b = c; 
	}
//Sort an array number	
template <class T>
	void Sort_array(T arr[ ], int size)	
	{
		
	}
		
template <class T>
	T mymax (T a, T b) 
	{
	 return a>b ? a:b; 
	}


int main()
{
    int a=10, b=5;
    cout<<a<<"  "<<b<<endl;
	swapnumber(a, b);
	cout<<a<<"  "<<b<<endl;
	
    float x=2.3, y=5.6;
    cout<<"x: "<<x<<" y: "<<y<<endl;
	swapnumber(x,y);
    cout<<"x: "<<x<<" y: "<<y<<endl;
	 
	cout<<"Max: "<<mymax(a,b); 
    return 0;
}
