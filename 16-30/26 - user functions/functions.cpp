#include <iostream>

// void happyBday(){
//     std::cout << "Happy birthday to you\n";
//     std::cout << "Happy birthday to you\n";             //you can declare a function before, and call it naturally, though for readability, some prefer to define the function after
//     std::cout << "Happy birthday dear you\n";           //but with that, you need to call it before the main, so the compiler knows that it exists regardless;
//     std::cout << "Happy birthday to you\n";
// }

void happyBday(std::string, int age); //--allows a function to be defined after the main;


int main() {


    //function - block of reusable code;

    std::string name = "Israel";
    int age = 21;

    happyBday(name, 21); //call the function
    std::cout << "\n";
    happyBday(name, 21);
    std::cout << "\n";
    happyBday(name, 21);


    return 0;
}

void happyBday(std::string name, int age){
    std::cout << "Happy birthday to you \n";
    std::cout << "Happy birthday to you \n";   
    std::cout << "Happy birthday dear " << name << "\n";           
    std::cout << "Happy birthday to you \n";
    std:: cout << "you are " << age << " years old\n";
}