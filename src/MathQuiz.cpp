
#include <bits\stdc++.h>
#include <windows.h>
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
