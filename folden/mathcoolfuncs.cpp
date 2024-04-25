#include <iostream>
#include <cmath>

int main(){
    double x = 3.14;
    double y = 4.99;
    double a;
    double b;
    double c;
    double d;
    double h;
    double m;
    double p;
    double z;

    a = std::max(x, y);
    b = std::min(x, y);
    c = pow(x, y);
    d = sqrt(9);
    h = abs(-10);
    m = round(x);
    p = ceil(y);
    z = floor(x);

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << h << '\n';
    std::cout << m << '\n';
    std::cout << p << '\n';
    std::cout << z << '\n';

    return 0;
}