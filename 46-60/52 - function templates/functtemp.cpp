#include <iostream>

//function template - describes what a function looks like.
//                  - Can be used to generate as many overloaded functions
//                  - as needed each using different data types

template <typename T, typename U>

auto max(T x, U y) {
    return (x>y) ? x : y;
}

int main() {

    std::cout << max(12.5, 2) << "\n";


    return 0;
}