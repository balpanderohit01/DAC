/*4. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class book
{
	private:
		string bname,author;
		double id,price;
	public :
		book();
		
		book(string bname,string author,double id,double price);
			
	
		void display();
		string getbname();
		void setbname(string bname);
	
	};
	

//		char getbname();
//		
//		
