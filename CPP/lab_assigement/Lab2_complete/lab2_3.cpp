/*3. Write a program to accept a character,
 an integer n and display the next n characters.*/

#include<iostream>
using namespace std;

int main3()
{

 int n,j=1;
 char a;
 cout<<"enter char :";
 cin>>a;
 cout<<"enter limit :";
 cin>>n;
 while(j<=n)
 {
  a=a+1;
  if(a=='z' || a=='Z')
  {
   cout<<"large limit\n";
   j=n;
  }
  else
  cout<<a<<"\t";
  j++;
 }
	
	return 0;
}
