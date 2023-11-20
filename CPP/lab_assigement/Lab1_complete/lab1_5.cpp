/*5. Write a program to accept a number and check if it is divisible by 5 and 7.*/

#include<iostream>
using namespace std;

int main5()
{
	int num,result;
	cout<<"Enter the no";
	cin>>num;
	if( num%5==0)
	{cout<<"this no is divisible by 5"<<endl;
	
	}
	else if(num%7==0)
	{
		cout<<"given no is divisible by 7"<<endl;
	}
	else
	{
		cout<<"Given no is not divisible by 5 & 7"<<endl;
	}
	
	
	return 0;
}
