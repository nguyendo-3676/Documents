#include <iostream>
using namespace std;
template <class T>
void repeatedNumber(T arr[], int size)
{
	T temp[100];
	int count=0;
	bool flag=false;
	for (int i=0;i<size-1;i++)
	{
		flag=false;		
		for (int k=0;k<count;k++)
		{
			if (arr[i]==temp[k])flag=true;
		}
	if(!flag)
	{
		for (int j=i+1;j<size;j++)
		{
			if ((arr[i]==arr[j]) && (flag==false))
			{
				cout<<"Phan tu lap lai la: "<<arr[i]<< " vi tri dau tien lap la: "<<j+1<<endl;
				temp[count]=arr[i];
				count++;
				flag=true;			
			}
		}
	}
	}
	
}
int main()
{
	int arr[100];
	int size;
	cout<<"Nhap so phan tu cua mang";
	cin>>size;
	for(int i=0;i<size;i++)
	cin>>arr[i];
	repeatedNumber(arr,size);
	return 0;
}
