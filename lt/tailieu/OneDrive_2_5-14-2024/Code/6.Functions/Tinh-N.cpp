#include <iostream>

using namespace std;

int Factorial(int N) {
	long giaiThua = 1;
	for(int i = 1; i <= N; i++) {
		giaiThua *= i;
	}
	return giaiThua;
}

int main() {
	int N;
	long giaiThua;
	do{ 
	cout << "Nhap N: ";
	cin >> N;}
	while (N<0);
	giaiThua = Factorial(N);
	cout << "N!= " << giaiThua << endl;

}

