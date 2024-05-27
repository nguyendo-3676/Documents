#include<iostream>
using namespace std; 
class ctime 
{ 
	private: 
	int hour,minutes,second; 
	public:
	ctime()
	{
		hour=0; minutes=0; second=0;
	} 
	ctime(int h,int m,int s); 
	

	
}; 
ctime::ctime(int a,int b,int c) 
	{ 
		hour=(a<0 || a>23)?0:a; 
		minutes=(b<0 || b>59)?0:b; 
		second=(c<0 || c>59) ? 0:c; 
	} 





