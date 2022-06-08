#include "gtest/gtest.h"

#include "cached-value.h"


class CachedValueTest : public ::testing::Test {

};


TEST_F(CachedValueTest, IsEmptyByDefault) 
{
    auto cv = CachedValue<int, int>();
    EXPECT_FALSE(cv.hasValue());
    EXPECT_FALSE(cv.hasError());
}

TEST_F(CachedValueTest, CanSetValue)
{
    auto cv = CachedValue<int, int>();
    cv.setValue(42);

    EXPECT_TRUE(cv.hasValue());
    EXPECT_EQ(42, cv.getValue());
    EXPECT_FALSE(cv.hasError());
}


TEST_F(CachedValueTest, CanSetError)
{
    auto cv = CachedValue<int, int>();
    cv.setError(-1);
    
    EXPECT_TRUE(cv.hasError());
    EXPECT_EQ(-1, cv.getError());
}
