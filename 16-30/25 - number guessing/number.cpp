#include <iostream>

int main() {
    

    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = (rand() % 100) + 1;



    std::cout << "**************GUESSING GAME***************** \n";


    do {

        std::cout << "Enter a guess (1-100)";
        std::cin >> guess;
        tries++;

        if(guess > num) {
            std::cout << "Too High!\n";
        } else if(guess < num) {
            std::cout << "Too Low!\n";
        } else {
            std::cout << "YOU WINNNN!!!\n";
            std::cout << "you took: " << tries << " number of tries \n";
        }

    } while(guess != num);

    std::cout << "***************************************************";

    return 0;

}