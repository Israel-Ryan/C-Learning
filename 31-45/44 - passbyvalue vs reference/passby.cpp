#include <iostream>
// void swap(std::string x, std::string y);
void swap(std::string &x, std::string &y);

int main() {

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x,y);

    std::cout << "X:" << x << "\n";
    std::cout << "Y:" << y << "\n";


    return 0;
}

// void swap(std::string x, std::string y) { //pass by VALUE i.e. a "copy" is sent

//     std::string temp;

//     temp = x;
//     x = y;
//     y = temp;

// }

void swap(std::string &x, std::string &y) { //pass by Reference i.e. THE ADDRESS of where it is located, and actually swapping the values

    std::string temp;

    temp = x;
    x = y;
    y = temp;

}
