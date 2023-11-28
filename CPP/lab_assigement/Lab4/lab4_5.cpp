#include<iostream>
#include "lab4_5.h"
using namespace std;
		Point::Point()
		{
			cout<<"This is default constructor"<<endl;
		
			x=14;
			y=17;
		}
		Point::Point(int x,int y)
		{
			cout<<"\n This is parameterized constructor"<<endl;
			this->x=x;
			this->y=y;
		}
		int Point::getxvalue()
		{
			return x;
		}
		void Point::setxvalue(int x)
		{
			this->x=x;
		}
		int Point::getyvalue()
		{
			return y;
		}
		void Point::setyvalue(int y)
		{
			this->y=y;
		}
		void Point::display()
		{
			cout<<"\n the value of x="<<x<<" and the value of y="<<y<<endl;
		}

