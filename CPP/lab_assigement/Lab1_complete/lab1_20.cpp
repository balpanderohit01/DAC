/*20:Accept a single digit from the user and display it in words. 
For example, if digit entered is 9, display Nine.*/

#include<iostream>
using namespace std;
int main20()
{
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	switch(num)
	{
		case 1:
			cout<<"one"<<endl;
			break;
		case 2:
			cout<<"Two"<<endl;
			break;
		case 3:
			cout<<"Three"<<endl;
			break;
		case 4:
			cout<<"Four"<<endl;
			break;
		case 5:
			cout<<"Five"<<endl;
			break;
		case 6:
			cout<<"Six"<<endl;
			break;
		case 7:
			cout<<"Seven"<<endl;
			break;
		case 8:
			cout<<"Eight"<<endl;
			break;
		case 9:
			cout<<"Nine"<<endl;
			break;
			}
}
