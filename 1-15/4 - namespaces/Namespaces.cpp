#include <iostream>

namespace first{
    int x = 1;
}

namespace second {
    int x = 2;
}


int main() {
    using namespace first;
    //using namespace std;
    //saves us using std::cout --> cout


    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities,
    //             as long as the namespaces are different.

    // int x = 0;
    // int x = 1; // 2 entities sharing the same namespace



    // std::cout << x << std::endl;
    std::cout << x << std::endl;
    std::cout << second::x << std::endl;


    return 0;
}