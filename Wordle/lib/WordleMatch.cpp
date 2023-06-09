#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include  "../include/WordleMatch.h"

using namespace std;

const int Word_Length = 5;
const int NO_MATCH = 0;
const int ALMOST_MATCH = 1;
const int MATCH = 2;

string WordleMatch::getRandomWord()
{
    string gameWord[30] = {"alpha","brief","chase","dread","earth","french","grood","hotch","ichor","jocky","known","lynch",
    "money","novel","qadis","royal","strut","taste","uhuru","venus","waded","xenon","yates","zakat","bread","ibans","icily","zaire"};

    string word;
    
    word = gameWord[rand() % 30];
    return word;
}

void WordleMatch::startWordle()
{
    int numTries = 6;
    string targetWord = getRandomWord();
    toUpperCase(targetWord);
    vector <string> tries(numTries);
    vector <vector<int>> matches(numTries, vector<int> (Word_Length));
    string input = "";
    int currTry = 0;
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

