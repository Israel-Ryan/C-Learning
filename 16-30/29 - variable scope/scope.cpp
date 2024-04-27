#include <iostream>

int myNum = 3; //global variables, not ideal, less secure, etc, but useful for certain things;

void printNum();

int main() {
    //Local variables - declared inside a function or block { }
    //Global Variables - declare outside of all functions

    int myNum = 1; //local to the main function;
 
    printNum();

    std::cout << myNum << "\n"; //uses the local version
    std::cout << ::myNum << "\n"; //uses the global version

    // :: scope resolution operator

    return 0;
}

void printNum() {
    // int myNum = 2; //Same variable name, within a different scope
    std::cout << myNum << "\n";
}