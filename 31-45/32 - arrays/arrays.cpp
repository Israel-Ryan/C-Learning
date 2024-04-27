#include <iostream>

int main() {
    //array - a data structure that can hold multiple values
    //      - values are accessed by an index number
    //      - essentially a variable that holds multiple values;

    // - Can only hold values of the *SAME* data type, whatever that datatype is

    std::string cars[] = {"Mclaren", "Mustang", "Corvette"};

    cars[1] = "Camaro";

    // std::cout << car; //displays a memory address, you need to specify specifics
    std::cout << cars[0] << "\n"; // starts at 0
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n";

    std::string food[2];

    food[0] = "Taco";
    food[1] = "Chicken";

    std::cout << food[0] << "\n";
    std::cout << food[1] << "\n";

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";
    std::cout << prices[3] << "\n";

    return 0;
}