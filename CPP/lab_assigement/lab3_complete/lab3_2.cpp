/*2.Create a class Person with data members as name, age, city. 
members. Also add accept and  display function. . Create the 
object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class person{
	private:
	string name, city;
	int age;
	
	public:
		void accept()
		{
			cout<<"Enter your name"<<endl;
			cin>>name;
			cout<<"Enter your age"<<endl;
			cin>>age;
			cout<<"Enter your city"<<endl;
			cin>>city;	
		}
		void display();		
};
void person::display()
{
	cout<<"your name is :"<<name<<endl;
	cout<<"age is:"<<age<<endl;
	cout<<"city name:"<<city<<endl;
}
int main2()
{
	person p1;
	p1.accept();
	p1.display();
	return 0;
}
