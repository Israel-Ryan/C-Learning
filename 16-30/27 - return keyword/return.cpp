#include <iostream>

double square(double length);
double cube(double length);


int main() {

    //return - returns a value back to the spot where you called the encompassing function

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << area << "\n";
    std::cout << "Volume is: " << volume << "\n";

    return 0;
}

double square(double length) {
    return length * length;
}

double cube(double length) {
    return length * length * length;
}