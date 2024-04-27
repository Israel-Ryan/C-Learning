#include <iostream>

int main() {
    int x; //decleration
    x = 5; //assignment

    int y = 7; // initialization

    int sum = x + y;

    std::cout << x << '\n' << y << std::endl;
    std::cout << "x + y = " << sum << std::endl;


    // integers (whole numbers);

    int age = 21;
    int year = 2024;
    int days = 7.5;


    std::cout << days << std::endl; // gets rounded down (Truncation)

    //double (number with decimal)

    double price = 10.99;
    double gpa = 3.8;
    double temperature = 25.1;

    std::cout << price << std::endl;

    //Char (single character)

    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << initial << currency << std::endl;

    //boolean (true or false)

    bool student = true;
    bool power = false;
    bool forSale = true;


    // string (an object that represents a sequence of text)

    std::string name = "Israel";
    std::string dayOfWeek = "wednesday";
    std::string food = "chinese food";
    std::string address = "string st";

    std::cout << name << std::endl;


    std::cout << "Hello " << name << std::endl;
    std::cout << "I am " << age << " years old" << std::endl;




    return 0;
}