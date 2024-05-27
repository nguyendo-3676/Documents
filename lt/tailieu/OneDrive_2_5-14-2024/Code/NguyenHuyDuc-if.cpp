#include<iostream>
using namespace std;
int main(){
	int a,b,c,min;
	cin>>a;
	cin>>b;
	cin>>c;
//	(a<b)?(min=a):(min=b);
//	(c<min)?(min=c):(min=min);
     (a<b)?((a<c)?(min=a):(min=c)):((b<c)?(min=b):(min=c));
	cout<<min;
	return 0;
}
