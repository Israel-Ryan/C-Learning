#include <iostream>

class Human{
    public:
        std::string name = "Rick"; // assigning default value;
        std::string job = "scientist"; 
        int age = 70;

        void eat() {
            std::cout << "This person is eating\n";
        }

        void drink() {
            std::cout << "This person is drinking\n";
        }

        void sleep() {
            std::cout << "This person is sleeping\n";
        }
};

int main() {
    //object = A collection of attributes, and methods
    //         They can have characterististcs and could perform actions
    //         used to mimic real world items
    //         Created from a class which acts as a blue-print

    Human human1;
    Human human2;

    // human1.name = "Rick";
    // human1.job = "Scientist";
    // human1.age = 70;

    // human2.name = "Morty";
    // human2.job = "Student";
    // human2.age = 15;

    std::cout << human1.name << "\n";
    std::cout << human1.job << "\n";
    std::cout << human1.age << "\n";

    human2.eat();
    human2.drink();
    human2.sleep();

}