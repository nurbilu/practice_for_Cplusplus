#include <iostream>
// // Overloaded functions

// void bakedPizza(std::string topping1);
// void bakedPizza(std::string topping1, std::string topping2);

// int main()
// {
//     bakedPizza("mashrooms", "pepperoni");
//     return 0;
// }

// void bakedPizza(){
//     std::cout << "Here is your pizza\n";

// }

// void bakedPizza(std::string topping1){
//     std::cout << "Here is your" << topping1 << " pizza\n";
// }

// void bakedPizza(std::string topping1, std::string topping2){
//     std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza\n";
// }

//global variables
int x = 10;

void printNum(int myNum);

int main(){
    // local variables = declared inside a function or block {} = more secure
    // global variables = declared outside a function or block {}

    // Local variables
    // int x = 5; 
    std::cout << x << '\n'; 
    printNum(42);

}
void printNum(int myNum){
    // Local variables
    int x = 3;
    std::cout << x << '\n';
}
