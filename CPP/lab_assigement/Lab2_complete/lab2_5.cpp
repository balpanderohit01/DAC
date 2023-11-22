/*5. Write a program to calculate factors of a given number.*/

#include<iostream>
using namespace std;

int main5()
{
	int num;
	cout<<"Enter the number";
	cin>>num;
	cout<<"The factor of given number is:";
	for(int i=1;i<=num;i++)
	{
		int check;
		check=num%i;
		if(check==0)
		cout<<" , "<<i;
		
	
	}
	
	return 0;
}
