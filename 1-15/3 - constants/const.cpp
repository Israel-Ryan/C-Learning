#include <iostream>

int main() {
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // "Read-only"


    //standard convention to make the variable name all UPPER_CASE with _ for spaces
    const double PI = 3.14159;

/*
    double pi = 3.14159;

    //Pi shouldn't be able to be changed
    pi = 420.69;
*/


    double radius = 10;
    double circumference = radius * 2 * PI;


    //a few examples of constant variables
    const int LIGHT_SPEED = 299792458;

    const int width = 1920;
    const int height = 1080;


    std::cout << circumference << "cm" <<  std::endl;



    return 0;
}