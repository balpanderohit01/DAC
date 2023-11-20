/*6. Write a program, which accepts annual basic salary of an employee 
and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1,50,000 Tax = 0
 		1,50,000 to 3,00,000 Tax = 20% 
 		> 3,00,000 Tax = 30% */
 
 #include<iostream>
 using namespace std;
 
 int main6()
 {
 	char ch[10];
 	double basic_salary;
 	cout<<"Name of employee"<<endl;
 	cin>>ch;
 	cout<<"basic salary of employee"<<endl;
 	cin>>basic_salary;
 	if(basic_salary>150000 && basic_salary<300000)
 	{
 		basic_salary=basic_salary-(basic_salary*0.2);
 		cout<<"employee salary is :"<<basic_salary<<endl;
 		
	 }
	else if(basic_salary>300000)
 	{
 		basic_salary=basic_salary-(basic_salary*0.3);
 		cout<<"employee salary is :"<<basic_salary<<endl;
 		
	 }
 	else 
 	{
 		cout<<"employee salary is :"<<basic_salary<<endl;
	 }
 	
 	
 	
 	return 0;
 }

