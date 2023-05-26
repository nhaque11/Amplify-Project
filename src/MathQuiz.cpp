#include <bits\stdc++.h>
#include <windows.h>
#include __MATHQUIZ_H__

using namespace std;

void MathQuizGame::mediumMode()
{
        int answer[10] = {540, 3649, 132, 3015, 1176, 3960, 656, 6534, 1350, 3354};
        int userAnswer[10];
        skipCount = 0;
        ansCount = 0;
        correctAnswer = 0;

        string question[10] =
        {
                "45 x 12 = ",
                "89 x 41 = ",
                "11 x 12 = ",
                "67 x 45 = ",
                "98 x 12 = ",
                "90 x 44 = ",
                "41 x 16 = ",
                "66 x 99 = ",
                "50 x 27 = ",
                "78 x 43 = "
        };

        cout << "Medium Math Quiz" << endl;
        cout << "Instructions for this mode: Please enter an answer using the keyboard. If you want to skip a question, please enter 0. The answer for a question will never be 0." << endl;

        playAgain:

                for (int i = 0; i < 10; i++)
                {
                        cout << question[i];
                        cin >> userAnswer[i];

                        if (userAnswer[i] != 0)
                        {
                                ansCount++;

                                if (userAnswer[i] == answer[i])
                                {
                                        correctAnswer++;
                                        cout << "That is correct. You're a math GOD!" << endl;
                                }
                                else
                                {
                                        cout << "WRONG!" << endl;
                                        cout << "The correct answer was -> " << answer[i] << endl;
                                }
                        }
                        else
                        {
                                skipCount++;
                                cout << "The correct answer was -> " << answer[i] << endl;
                        }

                }
                if (correctAnswer >= 6)
                {
                        cout << "Good job! You're better at math than i thought. You've completed Medium Difficulty." << endl;
                        cout << "Total questions -> 10" << endl;
                        cout << "You got " << correctAnswer << " correct." << endl;
                        cout << "You missed " << (10 - correctAnswer - skipCount) << " questions." << endl;
                        cout << "You skipped " << skipCount << " questions." << endl;
                }
                else
                {
                        cout << "Nice try, but you're not quite a math genius. Care to give it another shot?" << endl;
                        cout << "Total questions -> 10" << endl;
                        cout << "You got " correctAnswer << " correct." << endl;
                        cout << "You missed " << (10 - correctAnswer - skipCount) << "questions." << endl;
                        cout << "You skipped " << skipCount << " questions." << endl;
                        goto playAgain;
                }

}