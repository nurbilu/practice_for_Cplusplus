#include <iostream>

int main(){

    // integers
    int age = 30;
    int year = 2023;
    int days = 7;


    //double == float
    double pi = 3.14159;
    double price = 10.99;
    double tempature = 23.57;

    //char
    char letter = 'A';
    char symbol = '$';

    //boolian 
    bool power = true;
    bool student = false;

    //string (only in c++ not in c - like python and java)
    std::string name = "mickey";
    std::string day  = "friday";
    std::string food = "steak";
    std::string car = "tesla";

    std::cout << "Hello MR./Miss/MRS. " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    std::cout << "You were born in " << year - age << '\n';
    std::cout << "You are a student: " << student << '\n';
    std::cout << "Today is " << day << '\n';
    std::cout << "And you love to eat many " << food+ "s " << '\n';
}