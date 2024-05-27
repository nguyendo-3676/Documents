#include<stdio.h>
#include<stdlib.h>


void sapxep(int arr[], int kichthuoc);

int main(int argc, char *argv[])
{

	int arr[] = {0,1,4,4,2,6,7,8,5,9};
	int length = sizeof(arr)/sizeof(arr[0]);
	sapxep(arr, length);



}

void sapxep(int arr[],int kichthuoc)
{	
	int temp;

	for(int i=0; i<kichthuoc-1; i++)
	{
		for(int j = i+1; j<kichthuoc; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}

	}

	for(int i =0; i<kichthuoc; i++)
	{
		printf("%d ", arr[i]);
	}


}