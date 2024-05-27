#include <iostream>
#include <vector>

using namespace std;

template <class T>
 T minimum(T arr[ ], int size)
	{
	T smallest = arr[0];
	 for (int k = 1; k < size; k++)
	 {
	 if (arr[k] < smallest)
	 smallest = arr[k];
	 }
	 return smallest;
	}
int main()
 	{
	 int arr1[] = {40, 20, 35};
	 string arr2[] = {"Zoe", "Snoopy", "Bob", "Waldorf"};
	
	 cout << "The minimum number is " << minimum(arr1, 3) << endl;
	 cout << "The minimum string is " << minimum(arr2, 4) << endl;
	
	 return 0;
	}

