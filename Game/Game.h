#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include <string>

using namespace std;

class Game  {
    public:
        string Game(name);
        string getName();
        void play();
    
    private:
        string name;
        int highScore = 0;
};

#endif