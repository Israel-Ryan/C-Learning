#include <iostream>

int main() {

    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value, i.e. not pointing at anything;
    
    // nullptr - keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address was successfully assigned to a pointer;

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Address was not assigned\n";
        // std::cout << *pointer;  <-- don't do this, since it's null
    } else {
        std::cout << "Address was assigned\n";
        std::cout << *pointer;
    }
    
    
    return 0;
}