#ifndef __MATHQUIZ_H__
#define __MATHQUIZ_H__

#include "../Game/Game.h"

class MathQuizGame : public Game
{
	public:
		int skipCount;
		int ansCount;
		int correctAnswer;
		void startGame();
	private:
		void easyMode();
		void mediumMode();
		void hardMode();
};

#endif
