#include<iostream>
#include"cpplab4_4.h"
using namespace std;

book::book(){
		std::	cout<<"-------------this is default constructor"<<endl;
			bname="xyz";
			author="Dr.abc";
			id=01;
			price=100;
			
		}
book::book(string bname,string author,double id,double price)
			{
			this->bname=bname;
			this->author=author;
			this->id=id;
			this->price=price;
			
		}
void book::display()
		{
	cout<<"Name of book"<<bname<<endl<<"Name of author"<<author<<endl<<"book id"<<id<<endl<<"price of book"<<price<<endl;
		}
string book::getbname()
{
	return bname;
}
	void book::setbname(string bname)
	{
		
		this->bname=bname;
	}
