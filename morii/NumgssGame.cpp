#include <iostream>
#include <ctime>

int main() {
    int num;
    int guess;
    int tries = 0;  // Initialize tries to 0

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "********* NUMBERS GUESSING GAME *********\n";
    std::cout << "Let's play a game. I'm thinking of a number.\n";
    do {
        std::cout << "Enter a guess between 1 and 100:";
        std::cin >> guess;
        tries++;  // Increment tries on each guess

        if (guess > num) {
            std::cout << "Your guess is too high\n";
        } else if (guess < num) {
            std::cout << "Your guess is too low\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries!\n";
        }
    } while (guess != num);

    std::cout << "***************************************\n";

    return 0;
}
