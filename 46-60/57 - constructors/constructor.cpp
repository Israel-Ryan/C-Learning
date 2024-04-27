#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string x, int y, double z){
        // this->name = name;
        // this->age = age;
        // this->gpa = gpa;
        name = x; //If they are different, you can just use them without the this keyword
        age = y;
        gpa = z;
    }
};

int main() {

    //constructor - special method that is automatically called when an object is instantiated useful for assignging values to attrivbutes as arguments


    Student student1("Bob", 15, 3.4);
    Student student2("Rick", 40, 1.5);
    Student student3("Sandy", 21, 4.0);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";

    
    std::cout << student2.name << "\n";
    std::cout << student2.age << "\n";
    std::cout << student2.gpa << "\n";

    std::cout << student3.name << "\n";
    std::cout << student3.age << "\n";
    std::cout << student3.gpa << "\n";



    return 0;
}