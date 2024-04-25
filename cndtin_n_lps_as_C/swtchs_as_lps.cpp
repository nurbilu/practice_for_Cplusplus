#include <iostream>
int main() {

    int month;
    std::cout << "Enter the month number(1-12): ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "January has 31 days.";
            break;
        case 2:
            std::cout << "February has 28 or 29 days."; // Consider leap years
            break;
        case 3:
            std::cout << "March has 31 days.";
            break;
        case 4:
            std::cout << "April has 30 days.";
            break;
        case 5:
            std::cout << "May has 31 days.";
            break;
        case 6:
            std::cout << "June has 30 days.";
            break;
        case 7:
            std::cout << "July has 31 days.";
            break;
        case 8:
            std::cout << "August has 31 days.";
            break;
        case 9:
            std::cout << "September has 30 days.";
            break;
        case 10:
            std::cout << "October has 31 days.";
            break;
        case 11:
            std::cout << "November has 30 days.";
            break;
        case 12:
            std::cout << "December has 31 days.";
            break;
        default:
            std::cout << "Invalid month number.";
            break;
    }
    return 0;
}
