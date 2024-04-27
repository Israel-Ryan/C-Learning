#include <iostream>
#include <vector>


// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;


int main() {

    text_t firstName = "Israel";
    number_t age = 21;
    std::cout << firstName << '\n';
    std::cout << "This many years old: " << age;

    // std::vector<std::pair<std::string, int>> pairlist;
    // pairlist_t pairlist2;
    //simplifies everything very much
    

    // typedef = reserved keyword used to create an additional name
    //           (Alias) for another data type. New indentifier for
    //           an existing type. Helps with readability and typos.
    //           Use when there is a clear benefit, Replaced with
    //           'using' (works better w/ templates);


    return 0;
}