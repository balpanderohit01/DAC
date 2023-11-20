/*13:Check whether the number is palindrome or not? */

#include<iostream>
using namespace std;

int main13()
{
	int num,temp,rem,rev_no;
	cout<<"enter the number"<<endl;
	cin>>num;
	temp=num;
	while (num!=0)
	{
		rem=num%10;
		rev_no=(rev_no*10)+rem;
		num=num/10;
	}
	if(rev_no==temp)
	{
		cout<<"this number is palindrome";
	}
	else
	
	{
		 cout<<"this no is not palindrome";
	
	}
	
	
	return 0;
}
