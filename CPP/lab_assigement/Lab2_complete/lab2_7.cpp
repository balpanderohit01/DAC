/*7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
operation. Continue this process until user selects exit option.*/


#include<iostream>
using namespace std;

int main7()
{
	int ch;
	cout<<"To calculate area :";
	do{
		cout<<"1.circle 2.rectangle 3.triangle 4. exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				float a;
				cout<<"Enter the radius od circle: ";
				cin>>a;
				cout<<"the area of the circle is: "<<(2*3.14*a)<<endl;
				break;
			case 2:
				float b;
				cout<<"Enter the length:";
				cin>>a;
				cout<<"enter the breath:";
				cin>>b;
				cout<<"The area of rectangle is:"<<(a*b)<<endl;
				break;
			case 3:
				cout<<"Enter the base:";
				cin>>a;
				cout<<"enter the height:";
				cin>>b;
				cout<<"The area of triangle is:"<<(0.5*a*b)<<endl;
				break;
			
		}
	}while(ch!=4);
	
return 0;
}
