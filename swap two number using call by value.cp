#include<iostream>
using namespace std;

void swap(int,int);

int main()
{
        int a,b;
        cout<<"Enter Value Of A :: ";
        cin>>a;
        cout<<"\nEnter Value of B :: ";
        cin>>b;

        cout<<"\nBefore Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";

        swap(a,b);

        cout<<"\nOutside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}


void swap(int a,int b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\nInside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}
OUTPUT : 

Enter Value Of A :: 1

Enter Value of B :: 3

Before Swapping, Value of ::
        A = 1   B = 3

Inside Function After Swapping, Value of ::
        A = 3   B = 1

Outside Function After Swapping, Value of ::
        A = 1   B = 3
