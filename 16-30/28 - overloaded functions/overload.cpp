#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping1, std::string topping2);


int main() {

    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "cheese");



    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza\n";
}

void bakePizza(std::string topping) {
    std::cout << "Here is your pizza\n";
    std::cout << "it has this topping: " << topping << "\n"; 
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your pizza\n";
    std::cout << "it has these toppings: " << topping1 << " & " << topping2 << "\n"; 
}