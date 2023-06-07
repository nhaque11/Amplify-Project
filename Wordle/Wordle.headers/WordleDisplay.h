#ifndef __WORDLEDISPLAY_H__
#define __WORDLEDISPLAY_H__

#include <vector>
#include <iostream>
using namespace std;

class WordleDisplay
{   
    public:
        void printWordle(vector<string> tries, vector <vector<int>> matches, int currTry);
        void printWordleMenu();
};

#endif //WORDLEDISPLAY_H
