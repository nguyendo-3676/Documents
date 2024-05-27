#include <iostream>

using namespace std;

double Pow(double x, int n) {
    double result = 1;
    for(int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
 }
int main() {
    double x, result;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    result = Pow(x, n);
    cout <<"x mu n = " << result << endl;
}
