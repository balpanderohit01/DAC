/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include<iostream>
using namespace std;
class Student
{
	private:
	int rollNo,marks1,marks2,marks3,total;
	double per;
	string name;
	public:
		Student()
		{
		cout<<"Default constructor \n";
			rollNo=13;
			marks1=65;
			marks2=87;
			marks3=78;
			name="Shyam";
			
		}
	Student(int rollNo,int marks1,int marks2,int marks3,string name)
	{
		cout<<"Parameterized constructor";
		this->rollNo=rollNo;
		this->marks1=marks1;
		this->marks2=marks2;
		this->marks3=marks3;
		this->name=name;
		}
		void calculate()
		{
			total=marks1+marks2+marks3;
			
			per=total/3;
		
		}
	void display()
	{
		cout<<"Name-"<<name<<endl<<"roll no-"<<rollNo<<endl<<"marks1-"<<marks1<<endl<<"marks2-"<<marks2<<endl<<"marks3-"<<marks3<<endl;
		cout<<"TOTAL-"<<total<<endl;
		cout<<"Percentage-"<<per<<endl;

	
	
		if(per<100 && per>85)
			{
				cout<< "\n Grade-A";
			}
		else if(per<=85 && per>70)
			{
				cout<< "\n Grade-B";
			}
		else if(per<=70 && per>40)
			{
				cout<< "\n Grade-C";
			}
		else
			{
				cout<< "\n FAIL!!";
			 }
	
	}
		
			
};
int main1()
{
	int rollNo,marks1,marks2,marks3;
	string name;
	Student s1;
	s1.calculate();
	s1.display();
	
//	cout<<"\n Enter the sudent name-";
//	cin>>name;
//	cout<<"\n roll No-";
//	cin>>rollNo;
//	cout<<"\n sub1 marks-";
//	cin>>marks1;
//	cout<<"\n sub2 marks-";
//	cin>>marks2;
//	cout<<"\n sub3 marks-";
//	cin>>marks3;
	
//	Student s(rollNo, marks1,marks2,marks3,name);
//	s.calculate();
//	s.display();




return 0;
}

