#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>

using namespace std;
int main()
{
	int x = 0;
	int &y = x;
	y = 2000;
	cout << x << "$" << endl;
	return 0;
}