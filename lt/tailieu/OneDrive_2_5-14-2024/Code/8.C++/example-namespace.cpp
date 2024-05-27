#include <iostream>
using namespace std;

namespace A
{
  int x = 5;
  void printX()
  {
    // function statements goes here
    cout<<"Goi PrintX() tu namespace A "<<x<<endl;
    x+=5; 
  }
  void printX(int n)
 	{
  	cout<<"Goi PrintX (int "<<n<<") tu namespace A "<<x<<endl;
  	x+=10; 
	} 
}

namespace B
{
  int x=50;
  void printX()
  {
    // function statementsgoes here
    cout<<"Goi PrintX() tu namespace B "<<x<<endl;
  }
}

int main()
{
   A::printX() ;
   A::printX(2) ;
   B::printX();
   
   return 0;
}
