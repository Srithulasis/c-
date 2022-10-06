#include<iostream>
using namespace std;
void swap(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<a<<" "<<b;
}
int main()
{
	int p,q;
	cout<<"\nenter the num 1 : ";
	cin>>p;
	cout<<"\nenter the num 2 : ";
	cin>>q;
	swap(p,q);
	return 0;
}
Output:

Enter Value of x 12

Enter Value of y 14

After Swapping: x = 14, y = 12 
