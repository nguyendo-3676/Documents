#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>

using namespace std;
int sum(int k);

int main(int argc, char *argv[])
{
	long x = sum(10);
	cout << x << endl;
	return 0;
}

int sum(int k)
{
	if( k > 0)
	{
		return k + sum(k - 1);
	}else
	{
		return 0;
	}

}


