#include <iostream>
#include <ctime>

int main(){
    //pseudo-random number generator - NOT truly random (but close)
    
    srand(time(NULL));
    int num = rand() % 6 + 1;
    int num2 = rand() % 10 + 1;
    int num3 = (rand() % 20) + 1;
    int num4 = (rand() % 100) + 1;
    std::cout <<"this is D6: "<< num << "\n"; 
    std::cout << "this is D10: "<< num2 << "\n";
    std::cout << "this is D20: "<< num3 << "\n";
    std::cout << "this is D100: "<< num4 << "\n";

    return 0;
}