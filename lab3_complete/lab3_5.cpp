/*5. Create a class Point with data members as x,y. Add AcceptPoint and  add the display function. Create the object of this 
class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;

class point{
	private : 
		int m,n,p;
	public:
		void AcceptPoint(int a,int b);
		
	
		void display()
		{
		
			cout<<"The addition of " <<m<< " and " << n<<" is "<<p<<endl;
		}
		
};
void point::AcceptPoint(int x,int y)
	{
		
			m=x;
			n=y;
			 p= m + n;

	}
int main5()
{
		int x,y;
		cout<<"enter x:"<<endl;
			cin>>x;
			cout<<"enter y:"<<endl;
			cin>>y;
	point p;
	p.AcceptPoint(x,y);
	p.display();
	
	
	
	return 0;
}
