#ifndef HANGMAN_H
#define HANGMAN_H

#include "../Game/Game.h"

class HangmanGame : public Game
{
	public:
		void figureDisplay(int);
		void startGame();
};

#endif
