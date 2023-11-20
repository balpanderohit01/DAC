/*21. Write a program, which accepts two integers and an operator as a character (+ - * / ), 
performs the corresponding operation and displays the result.*/

#include<iostream>
using namespace std;
int main21()
{
	int a,b,result;
	int ch;
	cout<<"enter the number a && b";
	cin>>a>>b;
	cout<<"enter the special operation"<<endl;
	cout<<"1.for '+' 2.for '-' 3.for '*' 4.for '/' ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			result=a+b;
			cout<<a<<"+"<<b<<"=";
			break;
		case 2:
			result=a-b;
			cout<<a<<"-"<<b<<"=";
			break;
		case 3:
			result=a*b;
			cout<<a<<"*"<<b<<"=";
			break;
		case 4:
			result=a/b;
			cout<<a<<"/"<<b<<"=";
			break;
	}
	cout<<result;
}
