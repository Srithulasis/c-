#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"\nenter your age : ";
	cin>>age;
	if(age>=18)
	cout<<"\nyou are eligible to vote!!!";
	else if(age<18)
	cout<<"\nyou are allowed to vote after "<<18-age;
}
OUPUT:
ENTER YOUR AGE:18
YOU ARE ELGIBLE FOR VOTE!!!
