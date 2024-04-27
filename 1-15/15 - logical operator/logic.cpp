#include <iostream>

int main() {

    // && -- check if two conditions are true;
    // || -- check if at least one condition is true
    // !  -- reverses the logical state of its operand (true -> false)

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30) {
        std::cout << "The temperature is not good \n";
    } else {
        std::cout << "the temperature is good \n";
    }

    if(!sunny) {
        std::cout << "It is cloudy outside";
    } else {
        std::cout << "It is sunny";
    }

    return 0;
}