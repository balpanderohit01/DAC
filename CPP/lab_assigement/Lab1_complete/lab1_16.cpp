/*16:Write a  program to print all Prime numbers between 1 to n.*/

#include<iostream>
using namespace std;

int main16()
{
	int start_num,end_num,flag;
	cout<<"enter the starting number"<<endl ;//2-10
	cin>>start_num;
	cout<<"enter the ending number"<<endl;
	cin>>end_num;
	cout<<"the prime no is:"<<endl;
	for(int i=start_num;i<=end_num;i++)
	{
		
			if(i==0 || i==1)
			continue;
			flag=1;
				for(int j=2;j<=i/2;j++)
				{
					if(i%j==0)
					{
						flag=0;
						break;
					}
				}
			if(flag==1)
			cout<<i<<" ";
			
		
	}
	return 0;
}
