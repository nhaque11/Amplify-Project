#ifndef __WORDLE_H__
#define __WORDLE_H__

#include <iostream>
#include <vector>
using namespace std;

class Wordle: public Game
{   
    public:
        void startGame();
    private:
        string getRandomWord();
        void toUpperCase(string &inputWord);
        bool isValid (string word);
        bool check_AllMatch(string target, string guess);
        void markMatch(vector <vector <int>> &matches, int tryIndex, string target, string guess);
        void printWordle(vector<string> tries, vector <vector<int>> matches, int currTry);
        void printWordleMenu();
        const int Word_Length = 5;
        const int NO_MATCH = 0;
        const int ALMOST_MATCH = 1;
        const int MATCH = 2;
};

#endif // WordleMatch
