/*3.Create a class Date with data members as dd, mm, yy.
 Create AcceptDate function. Also add the display function. 
 Create the object of this class in main method and 
 invoke all the methods in that class.*/

#include<iostream>
using namespace std;

class date
{ private :
	int dd,mm,yy;
	public:
		int getdata(int x,int y,int z)
		{
		
			dd=x;
			mm=y;
			yy=z;
		
		
		}
		void display()
		{
			cout<<"output "<<dd<<"-"<<mm<<"-"<<yy<<endl;
			
		}
};

int main3()
{
	
	date d;
	d.getdata(11,9,2023);
	d.display();
	return 0;
}
