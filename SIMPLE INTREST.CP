#include<iostream>
using namespace std;
void si(int a,int b,int c)
{
	cout<<"\ninterest : "<<(a*b*c)/100;
}
int main()
{
	int p,n,r,s;
	cout<<"\nenter the principle amt : ";
	cin>>p;
	cout<<"\nenter the no of years : ";
	cin>>n;
	cout<<"\nare you senior citizen \n1.yes \n2.no \nenter your choice : ";
	cin>>s;
	if(s==1)
	si(p,n,12);
	else
	si(p,n,10);
	
}
OUPUT:
Calculate the Simple Interest :                                       
 -----------------------------------                                   
 Input the Principle: 20000                                            
 Input the Rate of Interest: 10                                        
 Input the Time: 1.5                                                   
 The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000V
