#include <string>
#include <iostream>
#include <stdlib.h>

#include "Wordle.h"
#include "Hangman.h"
#include "MQuiz.h"
#include "Game.h"

using namespace std;

int main() {
    getName();
    string userChoice;
    cout << "Welcome to Amplify " << name << " !" << endl;
    cout << endl;
    cout << "Game Choices:" << endl;
    cout << endl;
    cout << "1. Wordle" << endl;
    cout << "2. Math Quiz" << endl;
    cout << "3. Hangman" << endl;
    cout << "4. Quit" << endl
    cout << endl;
    cout << endl;
    cout << "Select an option:"
    cin >> userChoice;

    if (userChoice == "Wordle") {
        system("clear);
        play(Wordle);
    }
    else if (userChoice == "Math Quiz") {
        system("clear);
        play(MathQuiz);
    }
    else if (userChoice == "Hangman") {
        system("clear);
        play(Hangman);
    }
    else if (userChoice == "Quiz") {
        exit(1);
    }
}
