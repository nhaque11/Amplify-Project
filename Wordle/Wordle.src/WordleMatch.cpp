#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include  "../Wordle.headers/WordleMatch.h"

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
    //TODO
}
bool WordleMatch::isValid (string word)
{
    //TODO
    return true;
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

