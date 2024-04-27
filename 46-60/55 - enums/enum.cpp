#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

//if you don't define a pair explicitly, it will do 0 -> end of list


int main() {
    // enums = a user-defined data type that consists of paired named-integer constants
    //       - great if you have a set of potential options


    Day today = wednesday;

    switch (today) {
        case sunday: 
            std::cout << "It's sunday";
            break;
        case monday:
            std::cout << "It's monday";
            break;
        case tuesday:
            std::cout << "It's tuesday";
            break;
        case 3:
            std::cout << "It's wednesday";
            break;
        case thursday:
            std::cout << "It's thursday";
            break;
        case friday:
            std::cout << "It's friday";
            break;
        case saturday:
            std::cout << "It's saturday";
            break;

    }

    return 0;
}