#include <iostream>
int searchArray(int array[], int size, int element);

int main() {

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum; 

    std::cout << "What element would you like to find \n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index > 0) {
        std::cout << "my num is at: " << index << std::endl;
    } else {
        std::cout << "Your number could not be found" << std::endl;
    }



    return 0;
}

int searchArray(int array[], int size, int element) {

    for(int i = 0; i < size; i++) {
        if(array[i] == element) {
            return i; //return the index of the function
        }
    }

    return -1; // The value was not found

}