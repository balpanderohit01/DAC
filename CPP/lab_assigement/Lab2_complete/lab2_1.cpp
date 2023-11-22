/*1:Write a program that accepts numbers continuously as 
long as the number is positive and prints the 
sum of the given numbers. */

#include<iostream>
using namespace std;

int main1()
{
	int num,sum;
	while(num>=0){
		cout<<"enter the num";
		cin>>num;
		if(num>=0)
		sum+=num;
	}
	
	cout<<"the sum of the all entered positive is:"<<sum;
}
