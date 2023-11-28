/*5. Create a class ComplexNumber with data members real, imaginary. 
Create Default and Parameterized constructors. 
Write getters and setters for all the data members. 
Also add the display function. 
Create the object of this class in main method and
 invoke all the methods in that class.*/
#include<iostream>
using namespace std;
class ComplexNumber
{
	private:
		int a,b;
	public:
		ComplexNumber();
	
		ComplexNumber(int a,int b);
	
		void display();
	
		int geta();
	
		void seta(int a);
	
			int getb();
		
		void setb(int b);
		
};
