#include <iostream>

class VolumeCalculator {
public:
    // Overload operator* for cube
    double operator*(double side) {
        return side * side * side; // Volume of the cube
    }

    // Overload operator* for cuboid
    double operator*(std::tuple<double, double, double> dimensions) {
        double length, width, height;
        std::tie(length, width, height) = dimensions;
        return length * width * height; // Volume of the cuboid
    }
};

int main() {
    VolumeCalculator vc;

    // Input for cube
    double side;
    std::cout << "Enter the side length of the cube: ";
    std::cin >> side;

    // Input for cuboid
    double length, width, height;
    std::cout << "Enter the length of the cuboid: ";
    std::cin >> length;
    std::cout << "Enter the width of the cuboid: ";
    std::cin >> width;
    std::cout << "Enter the height of the cuboid: ";
    std::cin >> height;

    // Calculating volume using operator overloading
    std::cout << "Volume of the cube is: " << vc * side << std::endl;
    std::cout << "Volume of the cuboid is: " << vc * std::make_tuple(length, width, height) << std::endl;

    return 0;
}
