/*##Simple Example Program for Area Of Circle Using Pointer In C++*/
/*##Simple Area Of Circle C++ Program,pointers Example C++ Programming*/
/*##Pass By Reference C++ Function Example Program In C++ Programming*/

// Header Files
#include <iostream>
#include<conio.h>

using namespace std;

// Declare Area of Circle Function Using Pointer 

void area_of_circle(float *value, float *result) {
   *result = 3.14 * (*value) * (*value);
}

int main() {
   float radius, area;

   cout << "Pointer Example C++ Program : Area Of Circle Using Pointer and Functions\n";

   cout << "\nEnter the radius of Circle : ";
   cin>>radius;

   //area = 3.14 * radius * radius;
   area_of_circle(&radius, &area);

   cout << "\nArea of Circle : " << area;

   getch();
   return 0;
}
Sample Output
Pointer Example C++ Program : Area Of Circle Using Pointer and Functions

Enter the radius of Circle : 5

Area of Circle : 78.5
