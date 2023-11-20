/*7. Accept a lowercase character from the user 
and check whether the character is a vowel or consonant. 
(Hint: a, e, i, o, u are vowels)*/

#include<iostream>
using namespace std;
int main7()
{
	char ch;
	cout<<"Enter the character"<<endl;
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			cout<<"char "<<ch<<" is a vowel"<<endl;
		}
		else
		cout<<"char "<<ch<<" is consonant";
	}
	else
	{
		cout<<"you enter invalid char"<<endl;
	}
return 0;
}
