#include <iostream>
using namespace std;

int main() {
    int choice;
    float length, breadth, height, volume;

    cout << "Enter your choice: " << endl;
    cout << "1. Calculate Volume of Cube" << endl;
    cout << "2. Calculate Volume of Cuboid" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the length of the side of the cube: ";
            cin >> length;
            volume = length * length * length;
            cout << "Volume of the cube is: " << volume << endl;
            break;
        case 2:
            cout << "Enter the length of the cuboid: ";
            cin >> length;
            cout << "Enter the breadth of the cuboid: ";
            cin >> breadth;
            cout << "Enter the height of the cuboid: ";
            cin >> height;
            volume = length * breadth * height;
            cout << "Volume of the cuboid is: " << volume << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
