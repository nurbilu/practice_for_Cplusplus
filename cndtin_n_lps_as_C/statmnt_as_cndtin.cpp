#include <iostream>

int main(){

    int age;

std::cout << "Enter your age: ";
std::cin >> age;

if (age > 101){
    std::cout << "Welcome Senior Citizen - if needed , use the volunteers to help you vote.";
}
else if (age < 0){
    std::cout << "Invalid age.";
}
else if (age >= 18){
    std::cout << "You are eligible to vote.";
}
else{
    std::cout << "You are not eligible to vote.";
}

    return 0;
}
