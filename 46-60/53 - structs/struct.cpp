#include <iostream>


struct student{
    std::string name;
    double gpa;
    bool enrolled = true; //set a default value
};

// struct - A structure group related variables under one name
    //          structs can contain many different data types
    //          variables in a struct are known as members
    //          members can be aaccessed with . "class member access operator"

int main() {

    student student1;
    student1.name = "spongebob";
    student1.gpa = 3.2;

    student student2;
    student2.name = "patrick";
    student2.gpa = 2.1;

    student student3;
    student3.name = "squidward";
    student3.gpa = 1.5;
    student3.enrolled = false; //override a default value

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enrolled << "\n";

    std::cout << student3.name << "\n";
    std::cout << student3.gpa << "\n";
    std::cout << student3.enrolled << "\n";




    return 0;
}