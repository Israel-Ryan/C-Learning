#include <iostream>

class Animal {
    public:
        bool alive = true;
    void eat() {
        std::cout << "this animal is eating\n";
    }
    
};

class Dog : public Animal {
    public:
    
    void bark() {
        std::cout << "The dog goes woof!\n";
    }

};

class Cat : public Animal{
    public:
    
    void meow() {
        std::cout << "The cat goes meow!\n";
    }

};

int main() {
    
    Dog dog;
    Cat cat;
    
    std::cout << dog.alive << std::endl;
    dog.eat();
    dog.bark();

    std::cout << cat.alive << std::endl;
    cat.eat();
    cat.meow();
    //inheritance = a class can recieve attributes and methods from another class
    // children classes inherit from a Parent class
    // helps to reuse code;
    return 0;
}