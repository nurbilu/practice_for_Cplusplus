#include <iostream>
#include <cmath>

int main(){
    char op;
    double num1, num2;
    double result;
    std::cout << "**************Calculator**************\n";
    std::cout << "S is for square root by 2 - input only 1# , Enter 0 for 2# \n";
    std::cout << "Enter an operator (+, -, *, / , ^ , S): ";
    
    std::cin >> op;

    std::cout << "Enter 1#: ";
    std::cin >> num1;

    std::cout << "Enter 2#: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "result: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "result: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "result: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "result: " << result << "\n";
        break;
    case '^':
        result = pow(num1, num2);
        std::cout << "result: " << result << "\n";
        break;
    case 'S':
        result = sqrt(num1);
        std::cout << "result: " << result << "\n";
        break;
    default:
        std::cout << "that was invalid Operator\n";
        break;
    }

    
    std::cout << "**************************************\n";
}