/*18:Write a program to find greatest of three numbers using nested if-else.*/

#include<iostream>
using namespace std;

int main18()
{
	int num1,num2,num3;
	cout<<"Enter number";
	cin>>num1;
	cout<<"Enter number";
	cin>>num2;
	cout<<"Enter number";
	cin>>num3;
	if(num1>num2 && num1>num3)
	{
		cout<<num1<<" is greater"<<endl;
	}
	else if(num2>num3 && num2>>num1)
	{
		cout<<num2<<"is greater"<<endl;
	}
	else
	{
		cout<<num3<<" is greater"<<endl;
	}
}
