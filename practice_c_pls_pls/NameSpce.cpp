#include <iostream>

namespace first{
    int x = 10;
}

namespace second{
    double x = 15.65;
}

int main() {
    using namespace first;

    std::cout << x << std::endl;
    std::cout << second::x << std::endl;
    return 0;
}