#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "../WordleDisplay.h"
#include "../WordleMatch.h"

using namespace std;

const int Word_Length = 5;

int main(int, char  **) {
//declare necessary parameters
int numTries = 6;
vector <string> tries(numTries);
vector <vector<int>> matches(numTries, vector<int> (Word_Length));
string targetWord = getRandomWord();
string input;
int currTry = 0;
    return 0;
}