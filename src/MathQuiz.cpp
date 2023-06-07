
#include <iostream>
#include <ctime>
#include <array>
#include <string>
#include <stdlib.h>
#include __MATHQUIZ_H__

using namespace std;

void MathQuizGame::startGame()

{
    system("cls");

    time_t current = time(0);

    char *display = ctime(&current);

    cout << "\nLocal Date and Time: " << display << endl << endl;

    int mode;
    char ch;

level:
    cout << "---------------------- Welcome To Math Quiz! ----------------------" << endl;
    cout << "Choose game mode" << endl;
    cout << "1) Easy \n 2) Medium \n 3) Hard" << endl;
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
    cout << "Would you like to play again?\nType y for yes and n for no." << endl;

    cin >> ch;
     if (ch == 'y' || ch == 'Y')
        {
            goto level;
        }
    else
        {
            system("cls");        //should be updated somehow to send user to title main menu screen! 
        }
}


void MathQuizGame::easyMode()
{
    int ans[8];
    string question[8];
    int answer[8] = {20, 12, 6, 14, 5, 1, ,2, 5};
    question[8] = {"Question 1) 5x4=___?", "Question 2) 6x2=___?", "Question 3) What is 3+3?", "Question 4) What is 6+8?", "Question 5) What is 9-4?", 
                    "Question 6) 3-2=___?", "Question 7) What is 6/3?", "Question 8) What is 10/2?"};

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
    }

    if (correctAnswer >= 5)
    {
        string userName;
        cout << "Enter your name.";
        cin >> userName;
        cout << "Congratulations " << userName << "!" << " You passed easy mode." << endl;
        cout << "Total number of questions given: 8." << endl;
        cout << userName << " answered " << correctAns << " problems correctly!" << endl;
        cout << userName << " gave " << (8 - correctAns - skipCount) << " wrong answers." << endl;
        cout << userName << " skipped " << skipCount << " questions." << endl;
    }
    else 
    {
        string userName;
        cout << "Enter your name.";
        cin >> userName;
        cout << "You did not pass easy mode " << userName << "!" << " Try again." << endl;
        cout << "Total number of questions given: 8." << endl;
        cout << userName << " answered " << correctAns << " problems correctly!" << endl;
        cout << userName << " gave " << (8 - correctAns - skipCount) << " wrong answers." << endl;
        cout << userName << " skipped " << skipCount << " questions." << endl;

        goto retry;
    }
}


