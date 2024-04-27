#include <iostream>

int main() {
    // break -- break out of a loop
    // continue -- skip current iteration

    for(int i = 1; i <= 20; i++) {
        if(i == 13) {
            //break; --prints up to 12, then STOPS
            continue; // -- prints all but 13;
        } 
        std::cout << i << '\n';
    }

    return 0;
}