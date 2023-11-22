/*2. Write a program to accept two 
integers x and n and compute x raised to n.*/

#include <iostream>
using namespace std;
int main2()
{
 double x,n,pow=1,j=1;
 cout<<"Enter the values of X and n : ";
 cin>>x>>n;
 pow=x;
 while(n!=j)
 {
  pow=pow*x;
  j++;
 }
 cout<<x<<" to the power "<<n<<" = "<<pow;
 return 0;
}
