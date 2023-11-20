/*9:Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120*/

#include<iostream>
using namespace std;

int main9()
{
	int i,fac=1;
	cout<<"Enter the number"<<endl;
	cin>>i;
	for(i=i;i>0;i--)
	{
		fac=fac*i;
	}
		cout<<fac;
	return 0;
}

