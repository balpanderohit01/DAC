#include<iostream>
#include"lab4_6.h"
using namespace std;
	ComplexNumber::ComplexNumber()
		{
			cout<<"Default constructor \n";
			a=2;
			b=5;
		}
		ComplexNumber::ComplexNumber(int a,int b)
		{
			cout<<"\nParameterized constructor \n";
			this->a=a;
			this->b=b;
		}
		void ComplexNumber:: display()
		{
			cout<<"\n The complex number is-"<<a<<"+"<<b<<"i"<<endl;
		}
		int ComplexNumber:: geta()
		{
			return a;
		}
		void ComplexNumber::seta(int a)
		{
			this->a=a;
		}
			int ComplexNumber::getb()
		{
			return b;
		}
		void ComplexNumber:: setb(int b)
		{
			this->b=b;
		}
