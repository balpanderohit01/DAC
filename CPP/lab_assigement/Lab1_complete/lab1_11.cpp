/*11:Check if number is a prime number or not.: */

#include<iostream>
using namespace std;

int main11()
{
	int num,check=1,flag;
	cout<<"enter the number";
	cin>>num;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<"this is not prime  num";
			flag=1;
			break;
		}
		
	}
	if(flag==0)
	{
		cout<<"this is prime num"; 
	}
	return 0;
}

