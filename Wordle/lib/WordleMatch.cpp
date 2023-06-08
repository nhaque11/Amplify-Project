#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include  "../include/WordleMatch.h"

using namespace std;

string WordleMatch::getRandomWord()
{
    //TODO
    return "ready";
}

void WordleMatch::startWordle()
{
    const int Word_Length = 5;
    const int NO_MATCH = 0;
    const int ALMOST_MATCH = 1;
    const int MATCH = 2;
    int numTries = 6;
    vector <string> tries(numTries);
    vector <vector<int>> matches(numTries, vector<int> (Word_Length));
    string targetWord = getRandomWord();
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
    //TODO
}
bool WordleMatch::check_AllMatch(string target, string guess)
{
    //TODO
    return false;
}

