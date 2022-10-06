#include<iostream>
using namespace std;
void rev(int a)
{
	int rem,rev=0;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	cout<<"\n reversed number : "<<rev;
}
int main()
{
	int n;
	cout<<"\nenter the number to reverse : ";
	cin>>n;
	rev(n);
	return 0;
}
Output

Enter an integer: 2345
Reversed number = 5432
