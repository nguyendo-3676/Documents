#include <iostream>
using namespace std;
int main()
{

	int num = 1;
	STEP:
	do{
	 
	    if( num%2==0 )
	    {
	        num = num + 1;
	        goto STEP;
	     }
	
	   cout << "value of num : " << num << endl;
	   num = num + 1;
	 }while( num < 10 );
	 return 0;
}
