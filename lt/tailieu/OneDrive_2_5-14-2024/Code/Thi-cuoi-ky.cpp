#include <iostream>
#include <string>
using namespace std;

template<class T> class Node {
public:
	T Value;
	Node *Next;
	Node(T v) : Value(v), Next(0) {}
};

template <class T> class List {
	Node<T> *head, *tail;
	int count;
public:
	List() : count(0) { }
	~List(); // Hàm h?y

	void RemoveAll() {
		while (count) {
			--count;

			Node<T> *p = head;
			head = p->Next;
			delete p;
		}
	}
	void Add(T v) {
		Node<T> * p = new Node<T>(v);
		if (count++ == 0) { 			head = p; 		}
		else { 			tail->Next = p; 		}
		tail = p;
	}

	Node<T> * First() const { return head; }
	int Count() const { return count; }

       T* ToArray() {
           T* arr = new T[count];
           Node<T> *p = head;
           for (int i = 0; i < count; i++, p = p->Next) {
               arr[i] = p->Value;
           }
           return arr;
       }
};


class Date {
public:
	int Day, Month, Year;
	Date() { Day = Month = Year = 0; }
       Date(int, int, int); // Hàm kh?i t?o thi?t l?p các giá tr? nãm, tháng, ngày
       friend ostream& operator << (ostream&, const Date&); // toán t? lu?ng ra
};
class ThiSinh {
public:
	Date NgaySinh;
	string HoTen;
	double Toan, Ly, Anh; // Ði?m các môn thi, ði?m toán h? s? 2
public:
	ThiSinh() {}
	ThiSinh(const char *hoTen, const Date ns, double toan, double ly, double anh);
       double Tong() const; // Tính t?ng ði?m
       double TB() const;   // Trung b?nh các ði?m
       friend ostream& operator << (ostream&, const ThiSinh&); // toán t? lu?ng ra
};
class ListThiSinh : public List<ThiSinh *> {
public:
	ListThiSinh(ThiSinh **arr) 
	{
		int i = 0;
		while (arr[i]) { 			this->Add(arr[i++]); 					}
	}
};
int main()
{
	ThiSinh *arr[] = {
		new ThiSinh("Nguyen Thanh Son", Date(2020, 1, 15), 8, 7, 8),
		new ThiSinh("Tran Hai Nam", Date(2020, 10, 6), 9, 8, 6),
		new ThiSinh("Vu Duy Anh", Date(2020, 7, 31), 7, 10, 9),
		new ThiSinh("Hoang Anh Tuan", Date(2020, 12, 22), 3, 5, 7),
		new ThiSinh("Pham Thanh Huyen", Date(2020, 8, 10), 8, 8, 8),
		new ThiSinh("Phung Ngoc Linh", Date(2020, 4, 5), 9, 9, 9),
		0
	};
	ListThiSinh cacThiSinh(arr);
	auto p = cacThiSinh.First();
       int soLuong = cacThiSinh.Count();
	for (int i = 0; i < soLuong; i++, p = p->Next)
	{
		cout << *p->Value << endl;
	}
}

