#include <iostream>

double square(double length);
double cube(double length);

int main(){
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);
    std::cout << "Area of square: " << area << '\n';
    std::cout << "Volume of cube: " << volume << '\n';
    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}