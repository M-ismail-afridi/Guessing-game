#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    bool won = false;

    cout << "==============================" << endl;
    cout << "  NUMBER GUESSING GAME 1-100" << endl;
    cout << "==============================" << endl;

    // do-while loop - runs at least once
    do {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too High! Try lower." << endl;
        } else if (guess < secretNumber) {
            cout << "Too Low! Try higher." << endl;
        } else {
            cout << "\nMashAllah! You won in " << attempts << " attempts!" << endl;
            won = true;
        }

        // for loop - to show attempts left warning
        if (attempts >= 7 && !won) {
            cout << "Hint: You have tried " << attempts << " times!" << endl;
        }

    } while (!won && attempts < 10);

    // while loop - for final result display
    if (!won) {
        cout << "\nGame Over! The number was: " << secretNumber << endl;
    }

    // for loop - thanks animation
    cout << "\nThanks for playing ";
    for (int i = 0; i < 3; i++) {
        cout << ".";
    }
    cout << endl;

    return 0;
}
