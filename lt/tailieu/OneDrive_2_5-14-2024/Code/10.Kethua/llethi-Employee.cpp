#include <iostream>
#include <vector>

using namespace std;
class Employee 
{
private:
  string name;
  float salary;
public:
  string getName() {return name;}
  void pay() 
  {
  	cout<<"Call from Employee"<<endl;
  }
};

class Worker: public Employee 
{
private:
  int level;
public:
  void show() 
  {
    cout << getName();
       //<< salary; // l?i
  }
};
int main()
{
	Worker w;
	w.getName();
	w.show();
	w.pay();
	
	Employee e = w;  // OK
	return 0;
}


