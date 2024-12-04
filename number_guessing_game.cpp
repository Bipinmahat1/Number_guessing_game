#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    int randomNumber = rand() % 100 + 1;      // Generate a random number between 1 and 100
    int userGuess = 0;
    int attempts = 0;

    cout << "========================\n";
    cout << "🎮 Number Guessing Game 🎮\n";
    cout << "========================\n";
    cout << "Guess the number between 1 and 100:\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        }
    }

    cout << "Thanks for playing!\n";
    return 0;
}
