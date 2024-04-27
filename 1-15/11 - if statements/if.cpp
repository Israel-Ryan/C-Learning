#include <iostream>

int main() {
    //if statements = do something if a condition is true, if not then don't do it;


    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    //Comparison operators:
    // > - greater than
    // < - less than
    // == - equal to
    // >= - greater than or equal to
    // <= - less than or equal to

    //order of conditions matter

    if(age >= 18) {
        std::cout << "Welcome to the site";
    } else if( age < 0) {
        std::cout << "You haven't been born yet";
    } //else if(age >= 100) {
        //std::cout << "You are too old to enter this site";
    //} 
    else {
        std::cout << "You are not old enough to enter";
    }
    return 0;
}