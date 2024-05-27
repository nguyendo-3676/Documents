#include<iostream> 
using namespace std; 
  
class GfG 
{ 
   public: 
     static int i; 
      
     GfG() {  }; 
}; 
int  GfG::i=20;
int main() 
{ 
  GfG obj1; 
  GfG obj2; 
 
    
  cout << obj1.i<<" "<<obj2.i;
} 
