#include <iostream>

int main() {

    //arithmatic operators = retur the results of a specific
    // arithmetic operation (+ - * /)



    int students = 20;

    students += 1;
    students ++;


    students = students - 1;
    students -= 1;
    students -= 2;
    students --;
    --students;

    students = students * 2;
    students *= 2;

    students = students / 2;
    students /= 2;

    //16/3 = 5.33 -> 5 (with int);
    students /= 3;

    int remainder = students % 2;

    students = 6 - 5 + 4 * 3 / 2;

    std::cout << students << std::endl;
    std::cout << remainder << std::endl;

    return 0;
}