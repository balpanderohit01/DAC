/*4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. 
*/
#include<iostream>
using namespace std;
class Point
{
	private:
		int x,y;
	public:
		Point();
		
		Point(int x,int y);
		int getxvalue();
		void setxvalue(int x);
		int getyvalue();
		void setyvalue(int y);
		
		void display();
		
};

