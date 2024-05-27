#include<iostream>

using namespace std;

template <class T>
void Sort_array(T arr[ ], int size)
{ 
	T space;
	for(int i = 0; i<size - 1 ; i++){
	
		for(int j = i + 1; j < size; j++){
			if(arr[j] < arr[i]){
				space = arr[i];
				arr[i] = arr[j];
				arr[j] = space;
			} 
		} 
	}	
}
int main()
{
	int arr[] = {1, 3, 6, -1, 9};
	Sort_array(arr, sizeof(arr)/sizeof(int));
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	float arr_float[] = {1.3, 3.5, 6.1, -1.7, 9.9};
	Sort_array(arr_float, sizeof(arr_float)/sizeof(float));
	for(int i = 0; i < sizeof(arr_float)/sizeof(float); i++)
	{
		
		cout<<arr_float[i]<<" ";
	}
	return 0; 
 } 
