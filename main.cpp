#include <string>
#include <iostream>
#include <stdlib.h>

#include "Wordle.h"
#include "Hangman.h"
#include "MathQuiz.h"
#include "Game.h"

using namespace std;

int main() {
    string input;
    string userChoice;
    Game name;

    cout << "Enter your name: " << endl;
    cin >> input;
    name.username(string input);
    system("clear");

    cout << "Welcome to Amplify " << getName() << " !" << endl;
    cout << endl;
    cout << "Game Choices:" << endl;
    cout << endl;
    cout << "1. Wordle" << endl;
    cout << "2. Math Quiz" << endl;
    cout << "3. Hangman" << endl;
    cout << "4. Quit" << endl;
    cout << endl;
    cout << endl;
    cout << "Select an option:";
    cin >> userChoice;

    if (userChoice == "Wordle") 
    {
        startWordle();
    }
    else if (userChoice == "Math Quiz") 
    {
        startGame();
    }
    else if (userChoice == "Hangman") 
    {
        startHangman();
    }
    else if (userChoice == "Quit") 
    {
        exit(1);
    }

    return 0;
}
