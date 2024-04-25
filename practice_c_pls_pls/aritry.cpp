#include <iostream>

int main(){
    int studnets = 30;
    //double studnets = 30;
    // studnets = studnets + 3;
    studnets+= 7;
    // studnets++;
    // studnets = studnets - 4;
    studnets-=5;
    //studnets--;
    // studnets = studnets * 2;
    studnets*=5;
    // studnets = studnets / 3;
    studnets/=3;

    int remainder = studnets % 3;

    int math_exmaple = 10 + 6 - 2 * 3 / 2;
    
    std::cout << "There are " << studnets << " students in the class" << '\n';
    std::cout << "The remainder is " << remainder << '\n';
    std::cout << "The result of the math example is " << math_exmaple << '\n';
    return 0;
}