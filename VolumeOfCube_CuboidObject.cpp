#include <iostream>

using namespace std;

class Shape {
public:
    double length;
    double width;
    double height;

    // Constructor for Cube
    Shape(double s) : length(s), width(s), height(s) {}

    // Constructor for Cuboid
    Shape(double l, double w, double h) : length(l), width(w), height(h) {}

    // Function to calculate the volume of a cube
    double volumeOfCube() {
        return length * length * length;
    }

    // Function to calculate the volume of a cuboid
    double volumeOfCuboid() {
        return length * width * height;
    }
};

int main() {
    double side, length, width, height;

    // Input for cube
    cout << "Enter the side length of the cube: ";
    cin >> side;

    // Input for cuboid
    cout << "Enter the length of the cuboid: ";
    cin >> length;
    cout << "Enter the width of the cuboid: ";
    cin >> width;
    cout << "Enter the height of the cuboid: ";
    cin >> height;

    // Create objects for cube and cuboid
    Shape cube = Shape(side);
    Shape cuboid = Shape(length, width, height);

    // Compute and display the volume of the cube and the cuboid
    cout << "Volume of the cube is: " << cube.volumeOfCube() << endl;
    cout << "Volume of the cuboid is: " << cuboid.volumeOfCuboid() << endl;

    return 0;
}
