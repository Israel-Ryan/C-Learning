#include <iostream>

int main() {

    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << pName << "\n"; //displays the memory address 
    std::cout << *pName << "\n"; //displays the actual value

    std::cout << pAge << "\n";
    std::cout << *pAge << "\n";

    std::cout << freePizzas << "\n";
    std::cout << *pFreePizzas << "\n";





    return 0;
}