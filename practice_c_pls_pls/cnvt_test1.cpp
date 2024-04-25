#include <iostream>

int main(){
    int correct = 8 ;
    int questions = 10;
    double score = (double) correct / questions * 100;

    std::cout << "The score is " << score << '\n';
    return 0;
}