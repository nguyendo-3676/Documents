#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;
class DynamicArray 
{
	int * p;
	unsigned int size;
	public:
		DynamicArray(unsigned int asize=0)
		{
			p = new int[asize];
			size = asize;
		}
		~DynamicArray()
		{
			
			if (size>0) delete [] p;
		}
	
	void Init()
	{	
		if (size>0){
			for (int i=0;i<size;i++)
				p[i]=rand();
		}
	}
	void ChangeSize(unsigned newsize)
	{
		if (size>0) delete [] p;
		p = new int[newsize];
		size = newsize;
	}
	void Show()
	{
			//Hàm in n?i dung c?a m?ng
		if (size>0)
		{
		    cout<<"Array with the size:"<<size<<endl;
		    for (int i=0;i<size;i++) cout<<p[i]<<" ";
		    cout<<endl;
		}
	}

};
int main()
{
	DynamicArray a(5),b;
	a.Init();
	a.Show();

	a.ChangeSize(10);
	a.Init();
	a.Show();
	
     return system("PAUSE"), EXIT_SUCCESS;
}


