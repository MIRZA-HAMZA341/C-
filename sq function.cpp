#include<iostream>
using namespace std;
int sq(int a);
int main()

{
	int a;
	cout<<"ENTER ANY NUMBER"<<endl;
	cin>>a;
	int c=sq(a);
	cout<<"SQUARE OF FUNCTION IS = "<<c<<endl;
	return 0;
}
int sq(int a)
{
   	int sq=a*a;
    return sq;
	
}
