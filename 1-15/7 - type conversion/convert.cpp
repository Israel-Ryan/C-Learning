#include <iostream>

int main() {
    //type conversion = conversion of a value of one data type to another
    //                  2 types:
    //                  Implicit - automatic;
    //                  Explicit - Precede value with new data type (int);


    int x = 3.14; // implicitly converted to an int because it can't hold it;
    double y = (int) 3.14; // Explicit


    char z = 100;

    std::cout << x;
    std::cout << '\n' << y;
    std::cout << '\n' << z << std::endl;

    std::cout << (char) 150 << std::endl;


    int correct = 8;
    int questions = 10;
    double score = correct/(double) questions * 100;

    std::cout << score <<  "%" << std::endl;


    return 0;
}