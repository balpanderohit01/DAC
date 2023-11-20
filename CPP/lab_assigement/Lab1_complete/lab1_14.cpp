/*14:Write a  program to find sum of all even and odd numbers between 1 to n.*/


#include<iostream>
using namespace std;
int main14()
{
	int start_num=1, end_num,even_sum=0,odd_sum=0;
	cout<<"Enter the starting number is "<<start_num<<endl;
	cout<<"Enter the Ending number"<<endl;
	cin>>end_num;
	for(int i=start_num;i<=end_num;i++)
	{
		if(i%2==0)
		{
			even_sum+=i;
		}
		else
		{
			odd_sum+=i;
		}
		
	}
	cout<<"the sum of even number is:"<<even_sum<<endl;
	cout<<"the sum of odd number is :"<<odd_sum<<endl;
	
}
