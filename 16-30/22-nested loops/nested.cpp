#include <iostream>


int main() {
    /*
    nested loops - a loop within a loop
                -- can be a while, for, whatever
    loop() {
        loop() {

        }
    }
    */
   int rows;
   int columns;

   std::cout << "How many rows would you like? :";
   std::cin >> rows;

   std::cout << "How many columns would you like? :";
   std::cin >> columns;

    for(int i = 0 ; i < rows; i++) {
        for(int j = 0; j <= columns; j++) {
            std::cout << '-' << ' ';
        }
        std::cout << "\n";
    }

    return 0;
}