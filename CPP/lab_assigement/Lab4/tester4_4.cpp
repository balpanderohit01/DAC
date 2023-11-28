
#include<iostream>
#include"cpplab4_4.h"
using namespace std;
int main1()
	{
		string bname;
		book b;
		b.display();
		book b1("xyz","ahd",12,200) ;
		b1.display();
		cout<<"enter change book name"<<endl;
		cin>>bname;
		b1.setbname(bname);
		b1.display();
	}
