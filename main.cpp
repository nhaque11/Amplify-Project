#include <string>
#include <iostream>

#include "Wordle.h"
#include "Hangman.h"
#include "MQuiz.h"

using namespace std;

void displayMenu();

void displayMenu() {
    while (validChoice == false) {
        cout << "Game choices: " << endl;
        cout << endl;
        cout << "1. Wordle" << endl;
        cout << "2. Math Quiz" << endl;
        cout << "3. Hangman" << endl;
        cout << "4. Quit" << endl;
        cout << endl
        cout << "Select an option by entering the respective number of the game" << endl;
        cin >> userChoice;

        if (userChoice == "1") {
            validChoice = true;
            play(Wordle);
        }
        else if (userChoice == "2") {
            validChoice = true;
            play(Hangman);
        }
        else if (userChoice == "3") {
            validChoice = true;
            play(MQuiz);
        }
        else if (userChoice == "4") {
            validChoice = true;
            return;
        }
        else {
            cout << "Invalid option. Try again." << endl;
        }
    }
}

int main() {
    bool validChoice = false;
    string userChoice;
    Game name;

    cout << "Welcome to Amplify " << name << endl;

    displayMenu();
}