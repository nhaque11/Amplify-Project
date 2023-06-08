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