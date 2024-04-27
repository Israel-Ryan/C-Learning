#include <iostream>

void walk(int steps);
void run(int steps);
int factorial(int num);
int recFactorial(int num);

int main() {
    //recursion = a programming technique where a function
    //            invokes itself from within
    //            break a complex concept into a repeatable single step


    // (iterative vs recurseive)

    // advantages    -- less code, and is cleaer
    //               -- useful for sorting and searching algorithms

    // disadvantages -- uses more memory
    //               -- slower

    // walk(100);
    // run(100);

    std::cout << factorial(10) << "\n";
    std::cout << recFactorial(10);

    return 0;
}

void walk(int steps) {
    for(int i = 0; i < steps; i++) {
        std::cout << "You take a step\n";
    }
}

void run(int steps) {
    if(steps > 0) {
        std::cout << "you take a step\n";
        run(steps-1);
    }
}

int factorial(int num) {
    int result = 1;

    for(int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int recFactorial(int num) {
    if(num > 1) {
        return num * recFactorial(num - 1);
    } else {
        return 1;
    }
}