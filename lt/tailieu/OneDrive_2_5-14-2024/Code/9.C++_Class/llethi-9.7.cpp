#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;
class IntFactory{
    static unsigned count;
    public:
        static void Init(){//Khoi tao 
             srand((unsigned)time(0));
	       count=0;
	   }
	   static int CreateRandom()
	   {//Khoi tao so ngau nhien 
	       count++;
	       return rand();
	   }
	   //
	   static unsigned getCount()
	   {
	   	
	       return count;
	   }
};
unsigned IntFactory::count;
int main()
  {
	IntFactory fac;
	IntFactory::Init();
	int n;
	cout<<"Number of randoms:";
	cin>>n;
	for (int i=0;i<n;i++) 
		cout<<fac.CreateRandom()<<" "<<endl;
	cout<<"Number of created randoms:"<<IntFactory::getCount()<<endl;
	return 0;
  }
