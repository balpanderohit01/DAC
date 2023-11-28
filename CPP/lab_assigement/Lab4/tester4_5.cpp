#include<iostream>
#include "lab4_5.h"
using namespace std;
int main()
{
	int x,y;
	Point p;
	p.display();
	Point p1(43,12);
	p1.display();

		cout<<"Enter new value of x=";
			cin>>x;
	p1.setxvalue(x);

		cout<<"Enter new value of y=";
		cin>>y;	
	p1.setyvalue(y);
	p1.display();
	return 0;
	
}
