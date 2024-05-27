#include <iostream>
using namespace std;
void swap(int &a, int&b)
{
	int c=a;
	a=b;
	b=c;
}
void sapxep(int*arr, int n, bool b )
{  
	int k;
	for(int i=0;i<n-1;i++) 
	 	for(int j=i+1;j<n;j++)
	 	{
		  	if(b)
			  {
			  	if(arr[i]>arr[j]) swap(arr[i], arr[j])
			}
				
			else {
			  if(arr[i]<arr[j])
		  	  k=arr[i];
		  	  arr[i]=arr[j];
		  	  arr[j]=k
			  }
	  		
		}
}
int main() 
{
	int n=10;
  int *arr=new int [n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
	}
	sapxep(arr,n,true);
	return 0;
}
