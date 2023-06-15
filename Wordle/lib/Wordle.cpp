#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include  "../include/Wordle.h"

using namespace std;

string WordleGame::getRandomWord()
{
    string gameWord[30] = {"alpha","brief","chase","dread","earth","french","grood","hotch","ichor","jocky","known","lynch",
    "money","novel","qadis","royal","strut","taste","uhuru","venus","waded","xenon","yates","zakat","bread","ibans","icily","zaire"};

    string word;
    
    word = gameWord[rand() % 30];
    return word;
}

void WordleGame::toUpperCase(string &inputWord)
{
    transform(inputWord.begin(), inputWord.end(), inputWord.begin(), [] (unsigned char c)
    {return toupper(c);});
}

bool WordleGame::isValid (string word)
{
    return word.length() == Word_Length && word.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    == string::npos;
}

void WordleGame::markMatch(vector <vector <int>> &matches, int tryIndex, string target, string guess)
{
    for(int i = 0; i < guess.length(); i++)
    {
        matches[tryIndex][i] = NO_MATCH;
    }

    for (int j = 0; j < guess.length(); j++)
    {
        for (int i = 0; i < target.length(); i++)
        {
            if (guess[j] == target[i])  
            {
                if (i == j)
                {
                    matches[tryIndex][j] = MATCH;
                    break;
                }
                else {
                    matches[tryIndex][j] = ALMOST_MATCH;
                }
            }
        }
    }
}

bool WordleGame::check_AllMatch(string target, string guess)
{
    for (int i = 0; i < guess.length(); i++)
    {
        if(guess.at(i) != target.at(i)){
            return false;
        }
    }
    return true;
}

void WordleGame::printWordle(vector<string> tries, vector <vector<int>> matches, int currTry)
{   
    for (int i = 0; i <= currTry && i < tries.size(); i++)
    {
        string separate = "-";
        string outLine = "|";
        string text = "|";
        for (int j = 0; j < tries[i].length(); j++)
        {
            separate += "------";
            outLine += "     |";
            char val = toupper(tries[i][j]);
            text += "  ";
            if (matches[i][j] == ALMOST_MATCH)
            {
                text += "\033[33m";
            }
            else if (matches[i][j] == MATCH)
            {
                text += "\033[32m";
            }

            text += val;

            if (matches[i][j] == ALMOST_MATCH || matches[i][j] == MATCH)
            {
                text += "\033[0m";
            }
            text += "  |";
        }
        if (i == 0)
        {
            cout << separate << endl;
        }
        cout << outLine << endl;
        cout << text << endl;
        cout << outLine << endl;
        cout << separate << endl;
    }
}

void WordleGame::startGame()
{
    const int numTries = 6;
    string targetWord = getRandomWord();
    toUpperCase(targetWord);
    vector <string> tries(numTries);
    vector <vector<int>> matches(numTries, vector<int> (Word_Length));
    string inputWord = "";
    int currTry = 0;

    system("clear");
    cout << "---------------------- Welcome To Wordle! ----------------------" << endl;

    while (currTry < numTries)
    {
        do
        {
            cout << "Please enter your guess (word length must be " 
            + to_string(Word_Length) + ") or type Q to quit: " << endl;
            getline(cin,inputWord);
            toUpperCase(inputWord);
        } while (inputWord != "Q" && !isValid(inputWord));

        if (inputWord == "Q")  
        {
            cout << "You didn't find the word. The word was " << targetWord << ". Quitting game." << endl;
            break;
        }
        else 
        {
        tries[currTry] = inputWord;
        }
    markMatch(matches, currTry, targetWord, inputWord);
    printWordle(tries, matches, currTry);
    if (check_AllMatch(targetWord, inputWord))
    {
        cout << "You found the word! Congratulations!" << endl;
        break;
    }
    currTry++;
    }
    cout << "You didn't find the word. The word was " << targetWord << ". Quitting game." << endl;
   
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
			system("clear");
		}
		else
		{
			cout << "Please type y for Yes or n for No: ";
			cin >> decision;
		}
	}
}