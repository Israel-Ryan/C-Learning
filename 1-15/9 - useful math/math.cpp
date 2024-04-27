#include <iostream>
#include <cmath>


int main() {

    double x = 3.14;
    double y = 4;
    double a = 3.99;
    double z;

    //max function
    z = std::max(x,y);

    std::cout << z << std::endl;

    z = std::min(x,y);

    std::cout << z << std::endl;

    z = pow(2, 3);

    std::cout << z << std::endl;

    z = sqrt(8);

    std::cout << z << std::endl;

    z = abs(y - x);
    
    std::cout << z << std::endl;

    z = round(x);

    std::cout << z << std::endl;

    z = ceil(x);

    std::cout << z << std::endl;

    z = floor(a);

    std::cout << z << std::endl;



    return 0;
}