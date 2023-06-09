#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include  "../include/Wordle.h"

using namespace std;

string Wordle::getRandomWord()
{
    string gameWord[30] = {"alpha","brief","chase","dread","earth","french","grood","hotch","ichor","jocky","known","lynch",
    "money","novel","qadis","royal","strut","taste","uhuru","venus","waded","xenon","yates","zakat","bread","ibans","icily","zaire"};

    string word;
    
    word = gameWord[rand() % 30];
    return word;
}

void Wordle::toUpperCase(string &inputWord)
{
    transform(inputWord.begin(), inputWord.end(), inputWord.begin(), [] (unsigned char c)
    {return toupper(c);});
}
bool Wordle::isValid (string word)
{
    return word.length() == 5 && word.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    == string::npos;
}
void Wordle::markMatch(vector <vector <int>> &matches, int tryIndex, string target, string guess)
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

bool Wordle::check_AllMatch(string target, string guess)
{
    for (int i = 0; i < guess.length(); i++)
    {
        if(guess.at(i) != target.at(i)){
            return false;
        }
    }
    return true;
}

void Wordle::printWordle(vector<string> tries, vector <vector<int>> matches, int currTry)
{   
    printWordleMenu();
    for (int i = 0; i <= currTry && i <tries.size())
    {
        string seperate = "-";
        string outLine = "|";
        string text = " | "
        for (int j = 0; ; j < tries[i].length(); j++)
        {
            seperate += "------";
            outLine += "     |";
            char val = toupper(tries[i][j]);
            text += "  ";
            if (matches[i][j] == ALMOST_MATCH)
            {
                text += "\033[33m";
            }
            else if (matches[i][j])
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
        cout << seperate << endl;
    }
}

void Wordle::printWordleMenu()
{
    system("clear");
    cout << "---------------------- Welcome To Wordle! ----------------------" << endl;
    cout << "Please enter your guess (word length must be " 
    + to_string(Word_Length) + ") or type Q/q to quit: " << endl;
}

void Wordle::startGame()
{
    int numTries = 6;
    string targetWord = getRandomWord();
    toUpperCase(targetWord);
    vector <string> tries(numTries);
    vector <vector<int>> matches(numTries, vector<int> (Word_Length));
    string inputWord = "";
    int currTry = 0;

    while (currTry < numTries){
        do
        {
            getline(cin,inputWord);

        } while (inputWord != "Q" && !isValid(inputWord));

        if (inputWord == "Q")
        {
            cout << "Quit Game" << endl;
            break;
        }
        tries[currTry] = inputWord;
        currTry++;
    }
    markMatch(matches, currTry, targetWord, inputWord);
    printWordle(tries, matches, currTry);
    if (check_AllMatch(targetWord, inputWord))
    {
        cout << "You found the word! Congragulations!" << endl;
    }
    else if (currTry == numTries)
    {
        cout << "You did not find the word! The word was " << targetWord << "." << endl;
    }
}
