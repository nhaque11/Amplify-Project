#include "../header/Hangman.h"
#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <random>
#include <vector>

HangmanGame game;

class MockInputStream : public istream {
    public:
        MockInputStream() : istream(nullptr) {}
        MockInputStream(MockInputStream const&) : istream(nullptr) {}
        ~MockInputStream() {}

        void setMockInput (const vector <string>& inputs) {
            inputQueue = inputs;
        }

        string getLine() {
            if (inputQueue.empty())
                return "";
            
            string input = inputQueue.front();
            inputQueue.pop_front();
            return input
        }

        deque<string> inputQueue;
};

class MockOutputStream : public ostream {
    public:
        MockOutputStream() : ostream(nullptr) {}
        MockOutputStream(MockOutputStream const&) : ostream(nullptr) {}
        ~MockOutputStream() {}

        MockOutputStream& operator<<(const string& str) {
            output += str;
            return *this;
        }

        string output;
};

TEST(HangmanGameTest, call1) {
    EXPECT_NO_THROW(game.startGame())
}

TEST(HangmanGameTest, FigureDisplayTest0) {
    MockOutputStream mockOutputStream;
    cout.rdbuf(&mockOutputStream)

    hangmanGame.figureDisplay(0);
    string expectedOutput1 = 
        "\n\n"
        "  -----\n"
        "  |   |\n"
        "  |\n"
        "  |\n"
        "  |\n"
        "  |\n"
        "__|__\n";
    ASSERT_EQ(mockOutputStream.output, expectedOutput1);
}

TEST(HangmanGameTest, FigureDisplayTest1) {
    MockOutputStream mockOutputStream;
    cout.rdbuf(&mockOutputStream)

    hangmanGame.figureDisplay(1);
    string expectedOutput2 =
        "\n\n"
        "  -----\n"
        "  |   |\n"
        "  |   O    \n"
        "  |\n"
        "  |\n"
        "  |\n"
        "__|__\n";
    ASSERT_EQ(mockOutputStream.output, expectedOutput2);
}

TEST(HangmanGameTest, FigureDisplayTest2) {
    MockOutputStream mockOutputStream;
    cout.rdbuf(&mockOutputStream)

    hangmanGame.figureDisplay(3);
    string expectedOutput3 =
        "\n\n"
        "  -----\n"
        "  |   |\n"
        "  |   O    \n"
        "  |  /|\\   \n"
        "  |\n"
        "  |\n"
        "__|__\n";
    ASSERT_EQ(mockOutputStream.output, expectedOutput3);
}

TEST(HangmanGameTest, FigureDisplayTest3) {
    MockOutputStream mockOutputStream;
    cout.rdbuf(&mockOutputStream)

    hangmanGame.figureDisplay(5);
    string expectedOutput4 =
        "\n\n"
        "  -----\n"
        "  |   |\n"
        "  |   O    \n"
        "  |  /|\\   \n"
        "  |  / \\    \n"
        "  |\n"
        "__|__\n";
    ASSERT_EQ(mockOutputStream.output, expectedOutput4);
}

TEST_F(HangmanGameTest, StartGame_PlayAgainNo) {
    MockInputStream mockInputStream;
    hangmanGame.startGame()
    string expectedOutput = 
        "\n"
        " _ _ _ _ _ _ \n"
        "\n\n\n"
        "Attempts Remaining: 5/5\n"
        "Letters Guessed:  \n"
        "\n"
        "  -----\n"
        "  |   |\n"
        "  |   O    \n"
        "  |  /|\\   \n"
        "  |  / \\    \n"
        "  |\n"
        "__|__\n"
        "\n"
        "Uh oh, you did not guess the word to save the figure, better luck next time.\n"
        "Would you like to play again? Type y for Yes and n for No: ";
    
    ASSERT_EQ(mockOutputStream.output, expectedOutput);
}