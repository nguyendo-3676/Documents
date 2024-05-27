#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>

using namespace std;
void IsPrime(int n, bool &prime)
{
	bool b = true;
	for (int a = 2; b && sqrt(n) >= a; a++) 
	{
		b = (n % a != 0);
	}	
	prime=b;
}
bool IsPrime(int n)
{
	bool b = true;
	for (int a = 2; b && sqrt(n) >= a; a++) 
	{
		b = (n % a != 0);
	}	
	return b;
}
void GetsArr(int *arr, int n)
{
	
	for (int i=0; i<n; i++)
	{
		cout<<"Enter "<<i+1<<"element: ";
		cin>>arr[i];
	}
}
int CountNbprime(int *arr, int n)
{
	int temp=0;
	for (int i=0; i<n; i++)
	{
		if (IsPrime(arr[i])) temp++;
	}
	return temp;
	
}
void CountNbprime(int *arr, int n, int &nb)
{
	int temp=0;
	for (int i=0; i<n; i++)
	{
		if (IsPrime(arr[i])) temp++;
	}
	nb=temp;
	
}
int CountNbprime2D(int** arr, int m, int n)
{
	int temp=0;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
		{
			if (IsPrime(arr[i][j])) temp++;
		}
	return temp;
}
int main()
{
	int n, nb1D, nb2D_m, nb2D_n, nb1Dprime, nb2Dprime;
	bool b;
	
	cout<<"Enter a number: ";
	cin>>n;
	//Call void IsPrime(int n, bool &prime)
	IsPrime(n,b);
	cout << (b ? "YES" : "NO") << endl;
	//Call bool IsPrime(int n)
	cout << (IsPrime(n) ? "YES" : "NO") << endl;
	
	cout<<"Enter the nb of elements of 1D array: ";
	cin>> nb1D;
	int *arr1D= new int[nb1D];
	GetsArr(arr1D, nb1D);
	//Call int CoundNbprime(int *arr, int n)
	cout<< "Call int CountNbprime(int *arr, int n)"<<endl;
	cout<<"Number of prime: "<<CountNbprime(arr1D,nb1D)<<endl;
	//Call
	CountNbprime(arr1D, nb1D, nb1Dprime);
	cout<< "Call void CountNbprime(int *arr, int n, int &nb)"<<endl;
	cout<<"Number of prime: "<<nb1Dprime<<endl;
	cout<<"Enter the nb of rows of 2D array: ";
	cin>> nb2D_m;
	cout<<"Enter the nb of columns of 2D array: ";
	cin>> nb2D_n;
	int **arr2D= new int*[nb2D_m];
	for(int i=0; i<nb2D_m; i++)
		arr2D[i]= new int[nb2D_n];
	for (int i=0; i<nb2D_m; i++)
		for (int j=0; j<nb2D_n; j++)	
			{
				cout<<"Enter "<<i <<j <<": ";
				cin>>arr2D[i][j];
			}
	cout<<"Number of prime: "<<CountNbprime2D(arr2D, nb2D_m, nb2D_n)<<endl;		
		
	//Release
	delete[] arr1D; arr1D=NULL;	
	for(int i=0; i<nb2D_m; i++)
		delete[] arr2D[i];
	delete[] arr2D;
	return 0;	
}

	
