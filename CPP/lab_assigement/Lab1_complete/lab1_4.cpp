/*4. Write a program to accept an integer and check if it is even or odd.*/

#include<iostream>
using namespace std;

int main4()
{
	int a;
	cout<<"Enter any number"<<endl;
	cin>>a;
	a=a%2;
	if(a!=0)
	cout<<"The given is odd"<<endl;
	else
	cout<<"The given is even";
	
	return 0;
}

