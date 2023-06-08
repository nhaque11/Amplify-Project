#ifndef __WORDLEMATCH_H__
#define __WORDLEMATCH_H__

#include <iostream>
using namespace std;

extern const int Word_Length;
extern const int NO_MATCH;
extern const int ALMOST_MATCH;
extern const int MATCH;

class WordleMatch
{   
    public:
        string getRandomWord();
        void toUpperCase(string &inputWord);
        bool isValid (string word);
        void markMatch(vector <vector <int>> &matches, int tryIndex, string target, string guess);
        bool check_AllMatch(string target, string guess);
        void startWordle();
};

#endif // WordleMatch
