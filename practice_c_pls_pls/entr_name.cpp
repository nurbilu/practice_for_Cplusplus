#include <iostream>
#include <string>  // Include for std::string and std::getline

// getline must or if comes after regular cin, write code like comment below age input

int main() {
    std::string name;
    int age;

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "What is your age? ";
    std::cin >> age;

    // std::cout << "What is your name? ";
    // std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << "!" << '\n';
    std::cout << "And you are " << age << " years old." << '\n';

    return 0;
}
