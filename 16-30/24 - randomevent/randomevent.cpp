#include <iostream>


int main() {

    srand(time(0));


    int randNumber = (rand() % 5) + 1;


    switch(randNumber) {
        case 1:
            std::cout << "You win a bumper sticker";
            break;
        case 2:
            std::cout << "You win a piece of candy";
            break;
        case 3:
            std::cout << "You win a t-shirt";
            break;
        case 4:
            std::cout << "you win 100$ worth of lunch";
            break;
        case 5:
            std::cout << "You win a BRAND NEW CAR";
            break;
    }



    return 0;
}