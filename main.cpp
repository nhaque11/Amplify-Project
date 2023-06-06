#include <string>
#include <iostream>
#include <stdlib.h>

#include "Wordle.h"
#include "Hangman.h"
#include "MathQuiz.h"
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
        
        play(Wordle);
    }
    else if (userChoice == "Math Quiz") {
        play(MathQuiz);
    }
    else if (userChoice == "Hangman") {
        play(Hangman);
    }
    else if (userChoice == "Quit") {
        exit(1);
    }
}
