#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;
    do {
        std::cout << "**************************\n";
        std::cout << "Welcome to the bank\n";
        std::cout << "**************************\n";
        std::cout << "Please select an option\n";
        std::cout << "**************************\n";
        std::cout << "1. Check balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "**************************\n";
        std::cin >> choice;

        // std::cin.clear();
        // fflush(stdin);

        if (std::cin.fail()) {
            std::cin.clear(); // Clear error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3: {
            double amount = withdraw(balance);
            if (amount > 0) {
                balance -= amount;
            }
            showBalance(balance);
            break;
        }
        case 4:
            std::cout << "Thank you for banking with us\n";
            break;
        default:
            std::cout << "Invalid option\n";
            break;
        }
    } while (choice != 4);

    return 0;
}



void showBalance(double balance){
    std::cout << "Your balance is: $"<< std::setprecision(2) << std::fixed<< balance << '\n';
}

double deposit(){
    double depositAmount = 0;
    std::cout << "Enter amount to deposit: ";
    std::cin >> depositAmount;

    if (depositAmount > 0){
    return depositAmount;
    } else {
        std::cout << "Invalid amount\n";
        return 0;
    }
    return depositAmount;
}


double withdraw(double balance) {
    double withdrawAmount = 0;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> withdrawAmount;

    if (withdrawAmount > balance) {
        std::cout << "Insufficient funds\n";
        return 0;
    } else if (withdrawAmount <= 0) {
        std::cout << "Invalid amount\n";
        return 0;
    }
    return withdrawAmount; 
}
