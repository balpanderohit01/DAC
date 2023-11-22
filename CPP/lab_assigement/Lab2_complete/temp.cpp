/*8. Write a program to print all prime numbers between 1 to n*/

#include<iostream>
using namespace std;

int main()
{
	int i,num,start_range,end_range,count;
	cout<<"Enter the starting range: ";
   cin>>start_range;
   cout<<"Enter the ending range: ";
   cin>>end_range;
   cout<<"The prime numbers in between the range "<<start_range<<" to "<<end_range<<endl;
   for(num = start_range;num<=end_range;num++){
      count = 0;
      for(i=start_range;i<=num/2;i++){
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
