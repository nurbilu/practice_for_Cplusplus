#include <iostream>
#include <ctime>

int main() {
    int num;
    int guess;
    int tries = 0;
    const int max_tries = 9;  

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "********* NUMBERS GUESSING GAME *********\n";
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100.\n";
    do {
        std::cout << "Enter a guess:";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Your guess is too high\n";
        } else if (guess < num) {
            std::cout << "Your guess is too low\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries!\n";
            break; 
        }

        if (tries == max_tries) {
            std::cout << "Sorry, you've reached the maximum number of guesses.\n";
            break;
        }
    } while (true);  

    std::cout << "The number was: " << num << "\n";
    std::cout << "***************************************\n";

    return 0;
}
