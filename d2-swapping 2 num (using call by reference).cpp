#include <iostream>
using namespace std;
 
void swapByReference(int &a, int &b)
{
    int temp= a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    
    cout << "Enter two numbers x & y"<< endl;
    cin >> x;
    cin >> y;
    
    cout << "Value of x before swapping: " << x <<endl;
    cout << "Value of y before swapping: " << y <<endl;
    
    swapByReference(x,y);
    
    cout << "Value of x after swapping: " << x <<endl;
    cout << "Value of y after swapping: " << y <<endl;
}
