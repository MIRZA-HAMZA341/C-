#include <iostream>
using namespace std;
int subtr(int a,int b);
int main()
{
	int a,b;
	cout<<"ENTER ANY TWO NUMBERS"<<endl;
	cin>>a>>b;
	int c=subtr(a,b);
	cout<<"SUBTRACTION OF TWO NUMBERS IS = "<<c<<endl;
	
	
	return 0;
}
int subtr(int a,int b)
{
	a-b;
	return a-b;
}

