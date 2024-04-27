#include <iostream>

// cout << (insertion)
// cin >> (extraction)


int main() {

    std::string name;
    int age;

    std::cout << "What is your age? : ";
    std::cin >> age; //still has a '\n' character in the buffer

    std::cout << "What is your full name? : ";
    std::getline(std::cin >> std::ws, name); //allows you to accept a full line w/ spaces
    // std::cin >> name;



    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old";


    return 0;
}