#include <iostream>


int main() {

    /*
        dynamic memory = Memory that is allocated after the program is already compiled and running.
                         Uses the 'new' operator to allocate memory in the heap rather than the stack

        Useful when we don't know how much memory we will need. Makes our programs more flexible, 
        especially when accepting user input;
    
    
    */

   int *pNum = nullptr;

   pNum = new int;

   *pNum = 21;

   std::cout << "Address of the pointer: " << pNum << "\n";
   std::cout << "Value: " << *pNum << "\n";

   delete pNum; // don't cause memory leaks :)


    char *pGrades = nullptr;

    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    // pGrades = new char[5]; //kind of useless

    pGrades = new char[size];

    for(int i = 0 ; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;


    return 0;
}