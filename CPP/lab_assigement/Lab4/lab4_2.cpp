/*2.Create a class Person with data members as name, age, city. 
Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */
#include<iostream>
using namespace std;
class Person
{
	private:
	string name,city;
	int age;
	
	public:
	Person(string name,string city,int age)
	{
		cout<<"Parameterized Constructor \n";
		
		this->name=name;
		this->city=city;
		this->age=age;
	}
	void display()
	{
		cout<<"Name-"<<name<<endl;
		cout<<"\n City-"<<city<<endl;
		cout<<"\n Age-"<<age<<endl;
	}
	string getName()
	{
		return name;
	}
	string getCity()
	{
	
		return city;
	}
	int getAge()
	{
		return age;
	}
		void setName(string name)
	{	
		cin>>name;
		this->name=name;
	}
		void setCity(string city)
	{
		cin>>city;
		this->city=city;
	}
		void setAge(int age)
	{
		cin>>age;
		this->age=age;
	}
};
int main2()
{
	int age;
	string name,city;
	
	
	cout<<"\n Enter name-";
	cin>>name;
	cout<<"\n Enter city-";
	cin>>city;
	cout<<"\n Enter age-";
	cin>>age;
	
	Person p(name,city,age);
	p.display();
	cout<<"plz enter changes"<<endl;
	p.setName(name);	
	p.setCity(city);
	p.setAge(age);
	cout<<"After changes"<<endl;
	p.display();
}
