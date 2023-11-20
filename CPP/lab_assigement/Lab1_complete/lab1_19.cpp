/*19:Create menu driven program for Pizza Shop.And display total amount*/

#include<iostream>
using namespace std;

int main19()
{
	int ch,total;
	cout<<"\nenter your choice"<<endl;
	do
	{
	
	cout<<"\n1.plane_piza=100, 2.paneer_piza=250, 3.butter_piza=200, 4.extra_chease=20 5.Total"<<endl;	
	cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"your choice plane piza=100";
				total+=100;
				break;
					
			case 2:
				cout<<"your choice paneer piza=250";
				total+=250;
				break;
			case 3:
				cout<<"your choice butter piza=200";
				total+=200;
				break;	
			case 4:
				cout<<"your choice extra chees=20";
				total+=20;
				break;
			case 5:
				cout<<"total amount:"<<total;
				break;
		}
	}while(ch!=5);		
				
}
