#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void set_array(int arr[480][480], int x[256], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		x[i]=0;
		for(int j=0;j<n;j++)
		{
			arr[i][j]=rand() %(256);
			cout<<arr[i][j]<<" ";
		if(j==m-1)cout<<endl;
		++x[arr[i][j]];
		}
		printf("\n");
	}	
 } 
void set_ptrarray(int** arr, int *his, int m, int n)
{
	
	for(int i=0;i<m;i++)
	{
		his[i]=0;
		for(int j=0;j<n;j++)
		{
			arr[i][j]=rand() %(256);
			cout<<arr[i][j]<<" ";
		if(j==m-1)cout<<endl;
		++his[arr[i][j]];
		}
		printf("\n");
	}	
 } 

int main()
{
	int arr[480][480];
	int x[256];
	int m,n;
	cin >>m>>n;//m la hang,n la cot
	int** img= new int*[m];
	for(int i=0;i<m; i++)
	img[i]= new int[n];
	int*histo=new int[256]; 
	/*
	int m,n;
	cin>>m>>n;//m la hang,n la cot
	for(int i=0;i<m;i++){
		x[i]=0;
		for(int j=0;j<n;j++)
		{
			arr[i][j]=rand() %(256);
			cout<<arr[i][j]<<" ";
			//if(j==m-1)cout<<endl;
			++x[arr[i][j]];
		}
		printf("\n");
	}
	*/
	//set_array(arr,x,m,n); 
	set_ptrarray(img, histo, m,n);
	
//	for(int i=0;i<m;i++)
//		for(int j=0;j<n;j++)
//			for(int k=0;k<256;k++)
//				if(arr[i][j]==k) h[k]++;
				
	for(int k=0;k<256;k++)
		//cout<<"h["<<k<<"]="<<h[k]<<" ";
		printf(" h[%d] = %d ",k, histo[k]);
		
	delete [] histo;histo=NULL;
	for(int i=0;i<m;i++)
	delete [] img[i];
	delete[] img; 
	return 0;
}
