/*17:Write a program to check entered number is Armstrong number or not.
example: 153=(1*1*1)+(5*5*5)+(3+3+3)*/

#include<iostream>
#include<math.h>
using namespace std;

int main17()
{
	int num,power=-1,temp,i,result=0;
	cout<<"enter the number"<<endl;
	cin>>num;
	temp=num;
	i=num;
	do
	{	power++;
		temp=i%10;
		i=i/10;
	}while(temp!=0);
	i=num;
	for(int j=0;j<=power;j++){
	temp=num%10;
	num=num/10;
	result=result+pow(temp,power);
	}
	if(result==i)
	cout<<"given no is Armstrong number";
	else
	cout<<"given no is not Armstrong number ";
	
}
