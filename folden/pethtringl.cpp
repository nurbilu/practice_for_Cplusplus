#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;
    std::cout << "Enter the value of A: ";
    std::cin >> a;
    std::cout << "Enter the value of B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The value of C is: " << c << '\n';

return 0;
}