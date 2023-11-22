/*6. Accept two numbers and calculate GCD of them.*/

#include<iostream>
using namespace std;
int main6()
{
    int num1,num2,gcd;

    cout<<"Enter two number: ";
    cin>>num1>>num2;

    for(int i=1;i<=num1 && i<=num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    cout<<"G.C.D of given two number is: "<<gcd;

    return 0;
}
