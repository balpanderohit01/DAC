/*15: Write a  program to enter a number and print its reverse.*/

#include<iostream>
using namespace std;

int main15()
{
	int number,temp,reverse=0;
	cout<<"enter the number which want to reverse";
	cin>>number;//123
	temp=number;//123
	while(temp!=0)
	{
		number=temp%10;//3
		reverse=reverse*10+number;
		temp=temp/10;//12
	}
	cout<<"the reverse num is:"<<reverse;
}
