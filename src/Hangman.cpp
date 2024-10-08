#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

#include "../header/Hangman.h"

using namespace std;

void HangmanGame::figureDisplay(int lives)
{
	cout << endl << endl;
	cout << "  -----" << endl;
	cout << "  |   |" << endl;
	cout << "  |";
	
	if(lives >= 1) cout << "   O    ";
    	cout <<endl;
	cout << "  |";
	if(lives >= 3) cout << "  /|\\   ";
	cout <<endl;
	cout<< "  |";
	if(lives >= 5) cout << "  / \\    ";
	cout <<endl;
	cout<< "  |" << endl;
	cout<< "__|__" << endl;
}

void HangmanGame::startGame()
{
	srand (time(NULL));
	string gameWords[15] = {"artist","lucky","mango","television","beach", "wedding", "vacation", 
				"earth", "superhero", "sports", "cake", "jewelry", "happy", "letter", "golden"};
	string word;
	string guessedLetters;
	
	word = gameWords[rand() % 15];
	cout << endl << endl;
	string displayWord (word.length(), '_');
	
	int foundLetter = 0;
	char guess = ' ';
	int lives = 5;
	int checkFound = 0;
	
    while(lives >= 0)
    {
		//system("clear");
		 
		for(int i=0; i < word.length(); i++)
        {
            cout << " " << displayWord[i] << " "; 
        }
		
        cout << endl << endl << endl;
		 		
		cout<< "Attempts Remaining: "<< lives << "/5" << endl;
		cout<< "Letters Guessed: " << guessedLetters << endl; 
		
		figureDisplay(lives);
		
		if(foundLetter == word.length())
        	{
			cout << "Hooray you guessed the word and saved the figure!" << endl;
			break;
		}

        if(lives == 0) break; 
	
		cout << endl << "Choose a Letter: ";
		cin >> guess;
		
		guessedLetters = guessedLetters + " " + guess;
		
		if(displayWord.find(guess) != string::npos) 
        	lives++;
		
		checkFound = 0;
		for(int i=0; i < word.length(); i++)
       		 {
			if(word[i] == guess && displayWord[i] == '_')
            		{
				displayWord[i] = guess;
				foundLetter++;
				checkFound = 1; 
			}
		}
		 
		if(!checkFound)
			lives--;
    }

	if(foundLetter != word.length())
    		{
			cout << endl << "Uh oh, you did not guess the word to save the figure, better luck next time." << endl;
		}
	//make sure user is able to play again
	string decision = "no decision";
	cout << "Would you like to play again? Type y for Yes and n for No: ";
	cin >> decision;
	
	int flag = 1;

	while (flag == 1)
	{
		if (decision == "y")
		{
			flag = 0;
	   		startGame();
   		}
		else if (decision == "n")
		{
	    		flag = 0;
		}
		else
		{
			cout << "Please type y for Yes and n for No: ";
			cin >> decision;
		}
	}

	//system("clear");
}

