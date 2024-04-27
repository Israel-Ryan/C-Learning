#include <iostream>

int main() {

    // [].length() -> returns the length as an (int)
    // [].empty() -> returns a boolean if it is empty or not
    // [].clear() -> sets the value to empty;
    // [].append() -> adds to the end;
    // [].insert() -> allows characters to be inserted at a specific index
    // [].erase() -> allows characters to be removed from a certain index to a certain index


    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //name.length() //returns the length of the string

    if (name.length() > 12) {
        std::cout << "Your name can not be over 12 characters";
    } else {
        std::cout << "Welcome to the short name club: " << name << '\n';
    }

   // name.empty() -- returns a boolean value if its empty

   if(name.empty()) {
    std::cout << "You didn't enter a name \n";
   } else {
    std::cout << "tacobell \n";
   }

   //name.clear();
   name.append("@gmail.com");

   std::cout << name << " hi" << std::endl;

   std::cout << name.at(3) << std::endl;
   name.insert(0, "alphabet");
   std::cout << name << std::endl;

   std::cout << name.find(' ') << std::endl;

   name.erase(0, 5);

   std::cout << name <<std::endl;

   name.clear();

   std::cout << std::endl;



    return 0;
}