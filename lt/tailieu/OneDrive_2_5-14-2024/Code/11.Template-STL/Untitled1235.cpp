#include <iostream>
using namespace std;
class Dem{
public:
    int a;   
    string name;
    int count=0;
    Dem(int a, string name) {
        this->a = a;
        this->name = name;
        count++;
    }
    void display() {
        cout << count << " " << name << endl;
    }
};
 
//int Dem::count = 0;
 
int main() {
//Tao cac doi tuong cua lop Dem
    Dem a1 = Dem(1, "Nguyen Huu Tu"); 
    Dem a2 = Dem(2, "Nguyen Van A");
    Dem a3 = Dem(3, "Nguyen Thi B"); 

    a1.display();
    a2.display();
    a3.display();
  //  cout << "Tong cac doi tuong la: "<< count;
    return 0;
}

