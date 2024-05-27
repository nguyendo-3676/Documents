#include <iostream> 

using namespace std;

int main () {
	int N;
	cout << "Nhap N: ";
	cin >> N;
	int *p = new int[N];
	for(int i = 0; i < N; i++) {
		cin >> p[i]; 
	} 
	// in xuoi 
	for(int i = 0; i < N; i++) {
		cout << p[i] << " "; 
	} 
	cout << endl; 
	
	// in nguoc
	for(int i = N - 1; i >= 0; i --) {
		cout << p[i] << " "; 
	} 
	 delete p; 
	return 0; 
} 
