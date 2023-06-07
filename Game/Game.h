#ifndef GAME_H_
#define GAME_H_

#include <string>
#include <iostream>

using namespace std;

class Game
{
	public:
		string gameName(string name);
		string getName();
		void play();
	private:
		string name;
		int highScore = 0;
};

#endif
