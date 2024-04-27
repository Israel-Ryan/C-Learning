#include <iostream>

int main() {
    // fill() = fills a range of elements with a specific value
    //          fill (begin, end, value);

    // std::string food[5] = {"Pizza", "Pizza", "Pizza", "Pizza", "Pizza"};

    const int SIZE = 99;
    std::string food[SIZE];

    fill(food, food + SIZE/3, "Pizza");
    fill(food + SIZE/3, food + 2*SIZE/3, "Hamburger");
    fill(food + 2*SIZE/3, food + SIZE, "bepsi");

    for(std::string foodelement : food) {
        std::cout << foodelement << "\n";
    }
}