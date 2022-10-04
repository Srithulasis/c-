#include<iostream>
using namespace std;
int main()
{
string a,b;
cout<<"ENTER THE STRING => ";
cin>>a;
for(int i=a.size()-1;i>=0;i--) {
b+=a[i];
}
if(a==b)
cout<<"PALINDROME....";
else
cout<<"NOT A PALINDROME...!!!";
}
