#include <string>
#include <iostream>

#include "Wordle.h"
#include "Hangman.h"
#include "MQuiz.h"

using namespace std;

void displayMenu();

void displayMenu() {
    while (validChoice == false) {
        cout << "Type 'Wordle' to play Wordle, 'Hangman' to play Hangman, or 'MQuiz' for Math Quizzes" << endl;
        cin >> userChoice;

        if (userChoice == "Wordle") {
            validChoice = true;
            play(Wordle);
        }
        else if (userChoice == "Hangman") {
            validChoice = true;
            play(Hangman);
        }
        else if (userChoice == "MQuiz") {
            validChoice = true;
            play(MQuiz);
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

    cout << "Welcome to Amplify. Please enter the game you would like to play." << endl;

    displayMenu();
}