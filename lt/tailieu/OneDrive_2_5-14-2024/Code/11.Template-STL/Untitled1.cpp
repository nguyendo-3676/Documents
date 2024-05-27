#include<list> 
bool my_comparison(int n1,int n2)

{

 return n2 < n1;

} int main() 

{ std::list<int> my_list;

 std::list<int>::iterator iter;

 my_list.push_back(4);

 my_list.push_back(6);

 my_list.push_back(-2); 

 my_list.push_back(-1);

 my_list.push_back(7); //container = { 4, 6, -2, -1, 7 } ?

 my_list.sort(my_comparison); //container = { 7, 6, 4, -1, -2 }?

 return 0; } 
