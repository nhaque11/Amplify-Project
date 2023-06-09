#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include  "../include/Wordle.h"

using namespace std;

string WordleMatch::getRandomWord()
{
    //TODO
    return "ready";
}

void WordleMatch::toUpperCase(string &inputWord)
{
    transform(inputWord.begin(), inputWord.end(), inputWord.begin(), [] (unsigned char c)
    {return toupper(c);});
}
bool WordleMatch::isValid (string word)
{
    return word.length() == 5 && word.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    == string::npos;
}
void WordleMatch::markMatch(vector <vector <int>> &matches, int tryIndex, string target, string guess)
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

bool WordleMatch::check_AllMatch(string target, string guess)
{
    for (int i = 0; i < guess.length(); i++)
    {
        if(guess.at(i) != target.at(i)){
            return false;
        }
    }
    return true;
}

void printWordle(vector<string> tries, vector <vector<int>> matches, int currTry)
{   
    //TODO
}

void printWordleMenu()
{
    //TODO
}

void WordleMatch::startWordle()
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
