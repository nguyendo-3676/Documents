#include <iostream>

using namespace std;

int Fibonacci(int t) {
	if(t == 1 || t == 2) {
	
		printf ("1 1");
		return 1;}
	if(t == 0)
		return 0;
	return Fibonacci(t - 1) + Fibonacci(t - 2);
}

int main() {
	int t;
	cout << "Nhap t: ";
	cin >> t;
	cout << "So Fibonacci thu " << t <<" la: " << Fibonacci(t) << endl; 
	return 0;
}

