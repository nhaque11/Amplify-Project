
#ifndef _MATHQUIZ_H_
#define _MATHQUIZ_H_

class MathQuizGame
{
    public:

        int skipCount;
        int ansCount;
        int correctAnswer;

        void startGame();
        void easyMode();
        void mediumMode();
        void hardMode();
};

#endif