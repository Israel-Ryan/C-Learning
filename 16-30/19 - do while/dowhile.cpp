#include <iostream>

int main() {
    /*
        do while loop = do some block of code first, then repeat if some condition is true

        do {
            --THIS CODE WILL RUN AT LEAST ONCE
        } while (condition);
    
    */


   int number; //the default of the number is 0, so it's ruining the code;

//    while(number < 0) {
//     std::cout << "Enter a positive #: ";
//     std::cin >> number;
//    }




    do {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);

   std::cout << "The number is: " << number;

   return 0;
}