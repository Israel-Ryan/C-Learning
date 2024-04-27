#include <iostream>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
    
    Car(std::string make, std::string model, int year, std::string color) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main() {

    Car car1("chevy", "cruze", 2014, "red");
    Car car2("ford", "mustang", 2023, "red"); 

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.color << std::endl;

    std::cout << car2.make << std::endl;
    std::cout << car2.model << std::endl;
    std::cout << car2.year << std::endl;
    std::cout << car2.color << std::endl;
     

    return 0;
}