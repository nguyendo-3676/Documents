#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>

using namespace std;

class Cars
{
public:
	string name;
	long price;

	int sum(int k);
	/*
	{
		if( k > 0)
		{
			return k + sum( k - 1);
		}else
		{
			return 0;
		}
	}
	*/


	Cars(string x, int y);
	/*
	{
		name = x;
		price = y;
	}
	*/

	void Hienthi();
	/*
	{
		cout << "name car: " << name << ", price: " << price << "$" << endl;
	} 
	*/

};

int Cars::sum( int k) // ham car cua class Cars
	{
		if( k > 0)
		{
			return k + sum(k -1);
		}else
		{
			return 0;
		}
	}


void Cars::Hienthi() //ham hien thi cuar class Cars
	{
		cout << "name car: " << name << ", price: " << price << "$" << endl;
	}


	Cars::Cars(string x, int y) //constructor cua class Cars
	{
			name = x;
			price = y;
	}


int main(int argc, char *argv[])
{
/*
	int *hihi = NULL;
	hihi = new int[5];
	if ( hihi != NULL)
		cout << "hehe" << endl;
	delete [] hihi;

	string *hehe = NULL;
	hehe = new string[10];
	delete [] hehe;
*/

/*
	Cars car1;
	car1.name = "BMW";
	car1.price = 100000;
	cout << car1.name << "\n";
	cout << car1.price << "$" << endl;
	cout << car1.sum(10) << endl;
*/
	Cars car1("BMW", 100000);
	car1.Hienthi();

	Cars car2("Volvo", 150000);
	car2.Hienthi();
	return 0;
}

