#include<iostream>
using namespace std;
int main() {
   int a[7], i, s = 0;
   int *ptr;
   cout << "Enter the Numbers: ";
   for (i = 0; i < 7; i++) {
      cin >> a[i];
   }
   ptr = a;
   for (i = 0; i < 7; i++) {
      s = s + *(ptr + i);
   }
cout << "\nSum of Elements of Array: " << s;
}





Output
Enter the Numbers: 1 2 3 4 5 6 7
Sum of Elements of Array: 28
