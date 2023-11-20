/*10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3  */

#include<iostream>
using namespace std;

int main10()
{
	int m,n,result=1;
	cout<<"Enter the number to find m to the power n "<<endl;
	cin>>m;//3
	cout<<"enter the power";
	cin>>n;//4
	for(int i=1;i<=n;i++)
	{
		result=result*m;
	}
	cout<<result;
	
	
	
	return 0;
}
