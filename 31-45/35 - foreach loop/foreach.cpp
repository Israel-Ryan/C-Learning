#include <iostream>

int main() {

    // foreach loops - loop that eases the traversal over an iterable data set;

    std::string students[] = {"bob", "jeff", "sally"};
    int grades[] = {65, 75, 83, 89, 97, 100};

    for(std::string student: students) {
        std::cout << student << "\n";
    }

    for(int grade: grades) {
        std::cout << grade << "\n";
    }

    return 0;
}