#include <iostream>

double getTotal(double prices[], int size);

int main() {
    double prices[] = {15.05, 49.99, 75.00, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total << "\n";

    return 0;
}

double getTotal(double prices[], int size) { //decayed to a pointer
    double total = 0;
    
    for(int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}