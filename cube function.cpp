#include <iostream>
using namespace std;
int cube(int a);
int main()
{
	int a;
	cout<<"ENTER ANY NUMBER"<<endl;
	cin>>a;
	int c=cube (a);
	cout<<"CUBE OD THE NUMBER IS = "<<c<<endl;
	
	return 0;
}
int cube(int a)
{
	int cube=a*a*a;
	return cube;
}
