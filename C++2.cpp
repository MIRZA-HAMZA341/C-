#include <iostream>
using namespace std;
int main()
{
	int l,b,r,AREA,area,C;
	cout<<"ENTER THE LENGTH AND BREDTH OF A SQUARE"<<endl;
	cin>>l>>b;
	cout<<"ENTER THE RADIUS OS THE CIRCLE"<<endl;
	cin>>r;
	AREA=l*b;
	area=(22/7)*r^2;
	C=2*(22/7)*r;
	cout<<"AREA OF SQUARE :"<<AREA<<endl;
	cout<<"AREA OF CIRCLE :"<<area<<endl;
	cout<<"CIRCUMFERENCE OF CIRCLE :"<<C<<endl;
	
		return 0;
}
