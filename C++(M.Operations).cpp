#include <iostream>
using namespace std;
int main()
{
	
	int a,b;
	char op;
	
	cout<<"Enter any two number"<<endl;
	cin>>a;
	cin>>b;
	cout<<"enter any operand (+,-,/,*)"<<endl;
	cin>>op;
    if ( op=='+')
    {
	   cout<<"the sum of two number is = "<<a+b<<endl;
	   }
	   else if (op=='-')
	   {
	   	 cout<<"the subtraction of two number is = "<<a-b<<endl;
	   }
	   else if (op=='/')
	   {
	   	 cout<<"the division of two number is = "<<a/b<<endl;
	   }
	   else if (op=='*')
	   {
	   	 cout<<"the multiplication of two number is = "<<a*b<<endl;
	   }
	   
	   
	else
       {
          cout<<"wrong operator";}
	
	
	return 0;
}
