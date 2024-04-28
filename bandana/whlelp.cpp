#include <iostream>
#include <string>

int main()
{
    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        if (name.empty())
            std::cout << "You didn't enter a name\n";
        else 
            std::cout << "Hello, " << name << "!\n";
    }


    return 0;
}