#include <iostream>

int main() {
    //for (index ; codition ; iteration)
    // start at the index, check the condition, do the block of code, then iterator, then check condition, do block of code, iterator.. repeat

    for(int i = 10; i >= 1; i-=2) {
        std::cout << i << "\n"; 
    }

    std::cout << "Happy new year! \n";

    return 0;
}