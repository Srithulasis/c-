include <iostream>
using namespace std;
class room {
    public:
        double length;
        double breadth;
        double height;   

        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

};
int main() {
    Room room1;
    room1.length = 49.2;
    room1.breadth = 63.7;
    room1.height = 26.8;
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}

