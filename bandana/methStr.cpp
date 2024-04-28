#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "You didn't enter a name\n";
    }
    else if (name.length() > 12) {
        std::cout << "Your name is too long\n";
    }
    else {
        std::cout << "Hello, " << name << "!\n";
    }

    name.insert(0, "@");
    std::cout << name << "\n";

    name.append("##");
    std::cout << name << "\n";

    name.erase(2, 2);
    std::cout << name << "\n";

    return 0;
}
