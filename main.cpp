#include <iostream>
#include <string>
#include <stdlib.h>

#include "Game/Game.h"

using namespace std;

int main()
{
	int flag = 0;
	int userInput = 0;
	string userName = "no username";
	
	cout << "Enter your name: " << endl;
	cin >> userName;
	
	while (flag == 0)
	{
		system("clear");
		
		cout << "Welcome to Amplify " << userName << " !" << endl << endl;
		cout << "Game Choices:" << endl << endl;
		cout << "1. Wordle" << endl;
		cout << "2. Math Quiz" << endl;
		cout << "3. Hangman" << endl;
		cout << "4. Quit" << endl << endl << endl;
		cout << "Type the number of the option you would like to choose, followed by the enter key: ";
		cin >> userInput;
		
		flag = 1;

		while (flag == 1)
		{
			if (userInput == 1)
			{
				WordleGame wordle;
				wordle.startGame();
				flag = 0;
			}
			else if (userInput == 2)
			{
				MathQuizGame mathquiz;
				mathquiz.startGame();
				flag = 0;
			}
			else if (userInput == 3)
			{
				HangmanGame hangman;
				hangman.startGame();
				flag = 0;
			}
			else if (userInput == 4)
			{
				exit(1);
			}
			else
			{
				cout << "That is not one of the options. Please enter one of the four options listed above, followed by the enter key: ";
				cin >> userInput;
			}
		}
	}

	return 0;
}
