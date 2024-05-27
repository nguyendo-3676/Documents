#include <iostream>
using namespace std; 

int main ()
{
/*
  int a, b;
  cout << "Please enter two numbers: ";
  cin >> a>>b; 
  cout << "The value you entered is " << a<< " "<<b <<endl; 
*/
  string mystr;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  return 0;
}

  


