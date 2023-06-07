#ifndef __WORDLEMATCH_H__
#define __WORDLEMATCH_H__

#include <iostream>
using namespace std;

class WordleMatch
{   
    public:
        string getRandomWord();
        void toUpperCase(string &inputWord);
        bool isValid (string word);
        void markMatch(vector <vector <int>> &matches, int tryIndex, string target, string guess);
        bool check_AllMatch(string target, string guess);

    private:
        const int Word_Length = 5;
        const int NO_MATCH = 0;
        const int ALMOST_MATCH = 1;
        const int MATCH = 2;
};

#endif // WordleMatch
