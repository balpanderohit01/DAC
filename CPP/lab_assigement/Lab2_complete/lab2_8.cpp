/*8. Write a program to print all prime numbers between 1 to n*/

#include<iostream>
using namespace std;

int main8()
{
	int i, num, end_range, count;
   cout<<"Enter the ending range: ";
   cin>>end_range;
   cout<<"The prime numbers in between the range 1 to "<<end_range<<endl;
   for(num = 1;num<=end_range;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      cout<<" "<<num;
   }
	
	
return 0;	
}
