/*8. Write a  program to input angles of a triangle 
and check whether triangle is valid or not.*/

#include<iostream>
using namespace std;

int main8()
{
	int angle1,angle2,angle3;
	cout<<"enter the angle1,angle2,angle3"<<endl;
	cin>>angle1>>angle2>>angle3;
	if (angle1+angle2+angle3==180)
	{
		cout<<"Perfect triangle"<<endl;
	}
	else
	cout<<"not perfect triangle"<<endl;
	
	return 0;
	
}
