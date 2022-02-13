#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string name,shopname;
	int totalbill,nod,quantity,ordercode,temp;
	totalbill=0;
	cout<<"MIRZA HAMZA'S CODE"<<endl;	
	cout<<"NAME"<<endl;
	cin>>name;
	cout<<"--------------------menu-------------------"<<endl;
	cout<<"ordercode items                             prices"<<endl;
	cout<<"1)        sausage                           220 Rs"<<endl;
	cout<<"2)        mushroom and cheese omlete        50  Rs"<<endl;
	cout<<"3)        paratha                           25  Rs"<<endl;
	cout<<"4)        french toast                      45  Rs"<<endl;
	cout<<"5)        coffee                            120 Rs"<<endl;
	cout<<"6)        tea                               40  Rs"<<endl;
	cout<<"7)        pan cake with nutella serving     395 Rs"<<endl;
	cout<<"--------------------menu-------------------"<<endl;
	cout<<"customer name "<<name<<endl;
	cout<<"How much items do you want to order"<<endl;
	cin>>nod;
	if( nod>=1)

{
for(int i=1;i<=nod;i++)
{
	cout<<"	Please Enter Code of menu"<<endl;
	cin>>ordercode;
	if(ordercode==1)
	{
	cout<<"QUANTITY"<<endl;
	cin>>quantity;
	cout<<"sausage ordered "<<endl;
	temp= 220 * quantity;
	}
	else if(ordercode==2)
	{
	cout<<"QUANTITY"<<endl;
	cin>>quantity;
	cout<<"mushroom and cheese omelet ordered"<<endl;
	temp= 50 *quantity;
	}
	else if(ordercode==3)
	{
	cout<<"QUANTITY"<<endl;
	cin>>quantity;
	cout<<"paratha ordered"<<endl;
	temp= 25 *quantity;
	}
	else if(ordercode==4)
	{
	cout<<"QUANTITY"<<endl;
	cin>>quantity;
	cout<<"french toast";
	temp= 45 *quantity;
	}
	else if(ordercode==5)
	{
	cout<<"what is quantity"<<endl;
	cin>>quantity;
	cout<<"coffee ordered"<<endl;
	temp= 120 *quantity;
	}
	else if(ordercode==6)
	{cout<<" what is quantity"<<endl;
	cin>>quantity;
	cout<<"tea ordered"<<endl;
	temp= 40 *quantity;
	}
	else if(ordercode==7)
	{
	cout<<"what is quantity"<<endl;
    cin>>quantity;
	cout<<"pan cake with nutella serving ordered"<<endl;
	temp=395*quantity;
	}
	else
	{
		cout<<"not available"<<endl;
	}
	totalbill=totalbill+temp;
	temp=0;
	quantity=0;
    }   
	
{
	cout<<"Your total bill is "<<totalbill<<endl;
}
}
else  

{
		cout<<"You entered 0 No. Of order"<<endl;

	}	return 0;

}
