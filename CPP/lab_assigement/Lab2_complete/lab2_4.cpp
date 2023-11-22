/*4. Write a program to calculate factorial of a number. 
For e.g. factorial of 5 = 5! = 5*4*3*2*1 = 120*/

#include<iostream>
using namespace std;

int main4()
{
	int num,total=1;
	cout<<"Enter the number :";
	cin>>num;
	
		for(int i=num;i>0;i--)
		{
			total=total*num;
			num--;	
		}
	
	cout<<"the factorial of num is :"<<total;
	
	return 0;
}
