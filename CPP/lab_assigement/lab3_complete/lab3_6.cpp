/*6. Create a class ComplexNumber with data members real, imaginary. 
Create  AcceptComplexNumber() and the display function.
 Create the object of this class in main method and invoke all the methods in that class.*/
 
 #include<iostream>
 using namespace std;
 class ComplexNumber
 {
 	private:
 		double a,b,i,z;
 	public:
 		void AcceptComplexNumber()
 		{
 			cout<<"enter real part"<<endl;
 			cin>>a;
 			cout<<"enter imaginary part "<<endl;
 			cin>>b;
 			
 			
 			
		 }
		 void display();
		 
 };
 			void ComplexNumber::display()
 			{
		 		cout<<"Complex number equation is" <<a<<"+"<<b<<"i"<<endl;
		 	}
 int main6()
 {
 	ComplexNumber c;
 	c.AcceptComplexNumber();
 	c.display();
 	return 0;
 }
