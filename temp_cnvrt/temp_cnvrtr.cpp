#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "**********Temperature Converter**********\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "K = Kelvin\n";
    std::cout << "what uint would you like to convert to? ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        std::cout << "The temperature in Fahrenheit is: " << (temp * 9/5) + 32 << "F\n";
    }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        std::cout << "The temperature in Celsius is: " << (temp - 32) * 5/9 << "C\n";
    }
    else if (unit == 'K' || unit == 'k'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        std::cout << "The temperature in Kelvin is: " << temp + 273.15 << "K\n";
    }
    else
        std::cout << "Invalid unit. Please enter F, C or K.\n";
    
    std::cout << "*****************************************\n";

    
}