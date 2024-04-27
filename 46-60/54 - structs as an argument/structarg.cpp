#include <iostream>


struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main() {

    Car car1;
    Car car2;

    car1.model = "Cruze";
    car1.year = 2014;
    car1.color = "red";

    car2.model = "Ford f-350";
    car2.year = 2012;
    car2.color = "Black";


    paintCar(car1, "magenta");
    printCar(car1);

    paintCar(car2, "silver");
    printCar(car2);

    return 0;
}

void printCar(Car &car){
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";

}

void paintCar(Car &car, std::string color) {
    car.color = color;

}