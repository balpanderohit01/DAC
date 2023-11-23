/*1.Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include<iostream>
using namespace std;
class student{
	private:
	string name;
	int roll_no,marks1,marks2,marks3;
	double per,total;
	char grade;
	public :
	void acceptinfo(){
		cout<<"Name of student"<<endl;
		cin>>name;
		cout<<"roll no"<<endl;
		cin>>roll_no;
		cout<<"marks1"<<endl;
		cin>>marks1;
		cout<<"marks2"<<endl;
		cin>>marks2;
		cout<<"marks3"<<endl;
		cin>>marks3;
			
	}
	void calculate(){
		total=marks1+marks2+marks3;
		per=(total/300)*100;
		
	}
	char merit()
	{
			if(per>90){
				return 'A';
			}
			else if(per<=90 && per>65){
			return 'B';
			}
			else if(per<=65 && per>40){
			return 'c';
			}
			else{
				return 'D';
			}			
	}
	void display(){
		
		cout<<"total marks"<<total<<endl;
		cout<<"percentage = "<<per<<endl;
		grade=merit();
		cout<<"grade="<<grade<<endl;		
	}			
};
int main()
{
	student s1;
	s1.	acceptinfo();
	s1.calculate();
	s1.merit();
	s1.display();
	
	return 0;
}
