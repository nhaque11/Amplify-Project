#include <iostream>
#include <string> 
#include <stdlib.h> 
#include <ctime>
#include <conio.h> 

using namespace std;

void HangmanGame::figureDisplay(int lives)
{
    cout << endl << endl;
	cout << "  -----" << endl;
	cout << "  |   |" << endl; 
	cout << "  |"; 
    if(lives >= 1) cout << "   O    "; 
    cout <<endl;
	cout << "  |"; 
    if(lives >= 3) cout << "  /|\\   "; 
    cout <<endl;
	cout<< "  |"; 
    if(lives >= 5) cout << "  / \\    "; 
    cout <<endl;
	cout<< "  |" << endl; 
	cout<< "__|__" << endl;
}


