/*12:Sum of series : for example :-  1+2+3+….+n */

#include<iostream>
using namespace std;

int main12()
{
	int num,sum=0;
	cout<<"enter the number"<<endl;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		sum=sum+i;
	}
	cout<<sum;
	
	return 0;
}

