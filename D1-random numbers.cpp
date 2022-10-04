#include<iostream>
#include <iostream>

using namespace std;

int main()

{

int MyNumber;

cout<<"Enter the array size number::";

cin>>MyNumber;

int Rand[MyNumber];

for(int r= 0; r <MyNumber; r++)

Rand[r]=rand( )%10;

cout<<"\nArray Elements::"<<endl;

for(int r=0; r<MyNumber ; r++)

cout<<"Number of Elements "<<r+1<<"::"<<Rand[r]<<endl;

return 0;

}

