#include "../include/WordleMatch.h"
#include "vector"
#include "gtest/gtest.h"

WordleMatch obj;

TEST(toUpperTests, UPPER)
{
    string UPPER = "BULKS";
    obj.toUpperCase(UPPER);
    EXPECT_EQ(UPPER, "BULKS");
}

TEST(toUpperTests, LOWER)
{
    string LOWER = "bulks";
    obj.toUpperCase(LOWER);
    EXPECT_EQ(LOWER, "BULKS");
}

TEST(toUpperTests, LIMIT)
{
    string LIMIT = "BelLiGeREnT";
    obj.toUpperCase(LIMIT);
    ASSERT_EQ(LIMIT, "BELLIGERENT");
}

TEST(isValidTests, TRUE)
{
    string TRUE = "SMART";
    EXPECT_NO_THROW(obj.isValid(TRUE););
}

TEST(isValidTests, INVALID)
{
    string INVALID = "MULTIPLE";
    EXPECT_FALSE(obj.isValid(INVALID));
}

TEST(isValidTests, LOWERCASE)
{
    string LOWERCASE = "valid";
    ASSERT_EQ(obj.isValid(LOWERCASE), false);
}

TEST(isValidTests, REJECT)
{
    string REJECT = "lit";
    ASSERT_EQ(obj.isValid(REJECT), false);
}

TEST(checkAllMatchTests, RIGHT)
{
    string RIGHT = "RIGHT";
    string GUESS = "RIGHT";
    EXPECT_TRUE(obj.check_AllMatch(RIGHT,GUESS));
}

TEST(checkAllMatchTests, WRONG)
{
    string WRONG = "WRONG";
    string GUESS = "GUESS";
    EXPECT_FALSE(obj.check_AllMatch(WRONG,GUESS));
}

TEST(checkAllMatchTests, CASE)
{
    string CASE = "CaSE";
    string GUESS = "CASE";
    EXPECT_FALSE(obj.check_AllMatch(CASE, GUESS));
}

TEST(checkGetRandomWord, RandomWordTest)
{
    string word = obj.getRandomWord();
    
    bool wordFound = false;
    for (const string& gameWords : gameWord) {
        if (word == gameWords) {
            wordFound = true;
            break;
        }
    }
    EXPECT_TRUE(wordFound);

    string previousWord = word;
    bool differentWordsReturned = false;

    for (int i = 0; i < 10; ++i) {
        word = obj.getRandomWord();
        if (word != previousWord) {
            differentWordsReturned = true;
            break;
        }
        previousWord = word;
    }
    EXPECT_TRUE(differentWordsReturned);
}