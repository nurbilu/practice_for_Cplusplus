#include <iostream>
#include <string>

void HappyBirthday(std::string name , int age);


int main(){
std::string name = "Bandana";
int age = 29;

HappyBirthday(name , age);

    return 0;
}

void HappyBirthday(std::string name ,int age ){
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday dear " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "You are " << age << " years old!\n";
}