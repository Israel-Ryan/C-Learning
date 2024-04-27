#include <iostream>

int main() {

    std::string name;

    while(name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    // while(1==1) {
    //     std::cout << "HELP, IM STUCK";
    // }
    //
    // INFINITE LOOPS ARE POSSIBLE, WHERE THE CODE WILL NOT GO ANY FURTHER


    /*
        while(condition) {
            --Block of code
            while the condition is true, we run the code in here;
        }
    */


    std::cout << "Hello " << name;






    return 0;
}