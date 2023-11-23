/*4.Create a class Book with data members as bname,id,author,price. Write AcceptBook function . 
Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;
class book{
	private :
		string bname1,author1;
		double id1,price1;
		
		
			
	public :
		void getdata(string b,string a,int i,int p)
		{
		    bname1=b;
		    author1=a;
		    id1=i;
		    price1=p;
			 	
		}
		void display();
		
};
	void book::display()
	{
		cout<<"Book name is "<<bname1<<endl;
			cout<<"Author name is "<<author1<<endl;
				cout<<"Book id is "<<id1<<endl;
					cout<<"Book price is "<<price1<<endl;
	}
int main4()
{
		string bname,author;
		double id,price;
		
		cout<<"Book name"<<endl;
			 cin>>bname;
			cout<<"Author name"<<endl;
			 cin>>author;
			cout<<"Book id"<<endl;
			 cin>>id;
			cout<<"Book price"<<endl;
			 cin>>price;
	
	book b;
	b.getdata(bname,author,id,price);
	b.display();
	
	return 0;
}
