
#include <iostream>
#include <ctime>
#include <array>
#include <string>
#include <stdlib.h>

#include "../header/MathQuiz.h"

using namespace std;

void MathQuizGame::startGame()
{
    system("clear");

    time_t current = time(0);

    char *display = ctime(&current);

    cout << "\nLocal Date and Time: " << display << endl << endl;

    int mode;
    char ch;

level:
    cout << "---------------------- Welcome To Math Quiz! ----------------------" << endl;
    cout << "Choose game mode" << endl;
    cout << " 1) Easy \n 2) Medium \n 3) Hard" << endl;
    cin >> mode;
    switch (mode)
    {
        case 1:
        cout << "---------------------- Easy Mode ----------------------" << endl;
        easyMode();
        break;

        case 2:
        cout << "---------------------- Medium Mode ----------------------" << endl;
        mediumMode();
        break;

        case 3:
        cout << "---------------------- Hard Mode ----------------------" << endl;
        hardMode();
        break;

        default:
        cout << "Invalid input. Choose from list of modes!" << endl;
        goto level;
        break;
    }
    cout << endl;

    do {
        cout << endl;
        cout << "Would you like to play again?\nType y for yes and n for no." << endl;

        cin >> ch;
        if (ch == 'y' || ch == 'Y') {
            // Perform any necessary tasks before starting the game again
        } else {
            // Clear the screen by printing newlines
            for (int i = 0; i < 100; i++) {
                cout << endl;
            }
        }
    } while (ch == 'y' || ch == 'Y');
}

void MathQuizGame::easyMode()
{
  int ans[8];
  string question[8];
  int answer[8] = {20, 12, 6, 14, 5, 1, 2, 5};

// Assign values to the question array using a loop
    for (int i = 0; i < 8; i++) 
    {
        switch (i) 
        {
            case 0:
                question[i] = "Question 1) 5x4=___?";
                break;
            case 1:
                question[i] = "Question 2) 6x2=___?";
                break;
            case 2:
                question[i] = "Question 3) What is 3+3?";
                break;
            case 3:
                question[i] = "Question 4) What is 6+8?";
                break;
            case 4:
                question[i] = "Question 5) What is 9-4?";
                break;
            case 5:
                question[i] = "Question 6) 3-2=___?";
                break;
            case 6:
                question[i] = "Question 7) What is 6/3?";
                break;
            case 7:
                question[i] = "Question 8) What is 10/2?";
                break;
        }
    }

    ansCount = 0;
    correctAnswer = 0;
    skipCount = 0;

 cout << "Enter an answer after question is displayed (enter 0 to skip a question)." << endl;

retry:
    for (int i = 0; i < 8; ++i)
    {
        cout << question[i] << endl;
        cin >> ans[i];

        if (ans[i] != 0)
        {
            ansCount++;
            if(ans[i] == answer[i])
            {
                correctAnswer++;
                cout << "Correct!" << endl;
            }
            else
            {
                cout << "Incorrect!" << endl;
                cout << "The correct answer is: " << answer[i] << endl;
            }
         }
        else
            {
                skipCount++;
                cout << "The correct answer is:  " << answer[i] << endl;
            }
    }

    if (correctAnswer >= 5)
    {
        string userName;
        cout << "Enter your name.";
        cin >> userName;
        cout << "Congratulations " << userName << "!" << " You passed easy mode." << endl;
        cout << "Total number of questions given: 8." << endl;
        cout << userName << " answered " << correctAnswer << " problems correctly!" << endl;
        cout << userName << " gave " << (8 - correctAnswer - skipCount) << " wrong answers." << endl;
        cout << userName << " skipped " << skipCount << " questions." << endl;
    }
    else 
    {
        string userName;
        cout << "Enter your name.";
        cin >> userName;
        cout << "You did not pass easy mode " << userName << "!" << " Try again." << endl;
        cout << "Total number of questions given: 8." << endl;
        cout << userName << " answered " << correctAnswer << " problems correctly!" << endl;
        cout << userName << " gave " << (8 - correctAnswer - skipCount) << " wrong answers." << endl;
        cout << userName << " skipped " << skipCount << " questions." << endl;

        goto retry;
    }
}

void MathQuizGame::mediumMode()
{
        int answer[10] = {480, 130, 23, 22, 86, 176, 29, 60, 268, 360};
        int userAnswer[10];
        skipCount = 0;
        ansCount = 0;
        correctAnswer = 0;

        string question[10] =
        {
                "40 x 12 = ",
                "89 + 41 = ",
                "11 + 12 = ",
                "67 - 45 = ",
                "98 - 12 = ",
                "22 x 8 = ",
                "145 / 5 = ",
                "540 / 9 = ",
                "224 + 44 = ",
                "24 x 15 = "
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
                        cout << "You got " << correctAnswer << " correct." << endl;
                        cout << "You missed " << (10 - correctAnswer - skipCount) << "questions." << endl;
                        cout << "You skipped " << skipCount << " questions." << endl;
                        goto playAgain;
                }
}

void MathQuizGame::hardMode()
{
        int answer[10] = {11, 99, 25, 6, 116876, 397440, 597, 1629, 5, 864};
        int userAnswer[10];
        skipCount = 0;
        ansCount = 0;
        correctAnswer = 0;

        string question[10] =
        {
                "Adam has 24 pieces of candy in the night of Halloween, but 3 were just wrappers.He gave 10 pieces to his brother. How many pieces does Adam have left to eat? ",
                "What is the derivative of 99x? ",
                "What is the definite integral of 10x from [2,3]? ",
                "What is the remainder of 90/7? ",
                "958 x 122 = ",
                "960 x 414 = ",
                "471 + 126 = ",
                "686 + 939 = ",
                "What is the value of x when solving the equation, 2x + 55 = 64? ",
                "A puzzle set has 1080 pieces, How many pieces are in 80% of the puzzle set? "
        };

        cout << "Hard Math Quiz" << endl;
        cout << "Instructions for this mode: Please enter an answer using the keyboard. If you want to skip a question, please enter 0. The answer for a question will never be 0." << " Round to the nearest whole number!" << endl;

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
                        cout << "You got " << correctAnswer << " correct." << endl;
                        cout << "You missed " << (10 - correctAnswer - skipCount) << "questions." << endl;
                        cout << "You skipped " << skipCount << " questions." << endl;
                        goto playAgain;
                }

}
