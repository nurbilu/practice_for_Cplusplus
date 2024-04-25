#include <iostream>
int main() {
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter your grade (A-F): ";
    std::getline(std::cin, input);

    if (input.length() == 1) {
        char grade = input[0];
        switch(grade) {
            case 'A':
            case 'a':
                std::cout << "Excellent! You have a high distinction.";
                break;
            case 'B':
            case 'b':
                std::cout << "Very good! You have a distinction.";
                break;
            case 'C':
            case 'c':
                std::cout << "Good! You have a credit.";
                break;
            case 'D':
            case 'd':
                std::cout << "Satisfactory. You have passed.";
                break;
            case 'E':
            case 'e':
                std::cout << "Poor. You are at risk of failing.";
                break;
            case 'F':
            case 'f':
                std::cout << "Fail. You have not passed.";
                break;
            default:
                std::cout << "Invalid grade entered.";
                break;
        }
    } else {
        std::cout << "Invalid input. Please enter a single letter from A to F.";
    }
    return 0;
}

    char grade;
    std::cout << "Enter your grade (A-F): ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
        case 'a':
            std::cout << "Excellent! You have a high distinction.";
            break;
        case 'B':
        case 'b':
            std::cout << "Very good! You have a distinction.";
            break;
        case 'C':
        case 'c':
            std::cout << "Good! You have a credit.";
            break;
        case 'D':
        case 'd':
            std::cout << "Satisfactory. You have passed.";
            break;
        case 'E':
        case 'e':
            std::cout << "Poor. You are at risk of failing.";
            break;
        case 'F':
        case 'f':
            std::cout << "Fail. You have not passed.";
            break;
        default:
            std::cout << "Invalid grade entered.";
            break;
    }
    return 0;
}
