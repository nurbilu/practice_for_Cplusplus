#include <iostream>

int main()
{// a do while loop = some block of code first ,
//                    THEN repeat the block of code while the condition is true
    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0 );
    std::cout << "The # is " << number << "\n";

}