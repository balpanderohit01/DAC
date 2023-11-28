/*3. Create a class Date with data members as dd, mm, yy.
 Write getters and setters for all the data members. Also add the display function. 
 Create Default and Parameterized constructors.
 Create the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;
class date
{
	private:
		int dd,mm,yy;
	public:
		date()
		{
			dd=01;
			mm=01;
			yy=1990;
		}	
		date(int dd,int mm,int yy)
		{
			this->dd=dd;
			this->mm=mm;
			this->yy=yy;
		}
		
		void print()
		{
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
		int getdd()
		{
			return dd;
		}
		
		void setdd(int dd)
		{	
			this->dd=dd;
		}
			int getmm()
		{
			return mm;
		}
		
		void setmm(int mm)
		{	
			this->mm=mm;
		}
			int getyy()
		{
			return yy;
		}
		
		void setyy(int yy)
		{	
			this->yy=yy;
		}
};

int main3()
{
	int dd,mm,yy;
	
//	date d;
	cout<<"enter the date-month-year"<<endl;
	cin>>dd>>mm>>yy;
	date d1(dd,mm,yy);
	d1.print();
	cout<<"change date-"<<endl;
	cin>>dd;
	d1.setdd(dd);
	cout<<"change month-"<<endl;
	cin>>mm;
	d1.setmm(mm);
	cout<<"change year-"<<endl;
	cin>>yy;
	d1.setyy(yy);
	d1.print();
	return 0;
}
