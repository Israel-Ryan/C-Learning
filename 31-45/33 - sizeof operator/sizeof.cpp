#include <iostream>

int main() {
    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    std::string name = "bro Code is awesome in every way, and amazing at everything that's ever existed";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;

    char grades[] = {'A', 'B', 'C', 'D','E', 'F'};

    std::string students[] = {"bob", "jeff", "spongebob", "squidward"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}