#include "../header/MathQuiz.h"
#include "gtest/gtest.h"
#include <iostream>
#include <sstream>

MathQuizGame game;

TEST(MathQuizGameTest, EASYMODE_CORRECT) {
    istringstream iss("20 12 6 14 5 1 2 5");
    cin.rdbuf(iss.rdbuf());

    string output = captureOutput([&]() {
        game.easyMode();
    });

    EXPECT_TRUE(output.find("Congratulations") != string::npos);
}

TEST(MathQuizGameTest, EasyModeWrong) {
    istringstream iss("19 12 6 14 5 1 2 5");
    cin.rdbuf(iss.rdbuf());

    string output = captureOutput([&]() {
        game.easyMode();
    });

    EXPECT_TRUE(output.find("You did not pass easy mode") != string::npos);
}

TEST(MathQuizGameTest, EasyModeSkippedQuestions) {
    istringstream iss("20 0 6 0 5 0 2 0");
    cin.rdbuf(iss.rdbuf());

    string output = captureOutput([&]() {
        game.easyMode();
    });

    EXPECT_TRUE(output.find("You did not pass easy mode") != string::npos);
}