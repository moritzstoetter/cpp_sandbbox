#include <gtest/gtest.h>

#include "example.hpp"

class fixture : public testing::Test {
protected:
    void SetUp() override
    {
        ex.a = 1;
        ex.b = 101;
    }

    void TearDown() override
    {
        // tear down here
    }

public:
    example ex{};
};

TEST_F(fixture, fixture_test_1)
{
    EXPECT_EQ(ex.a, 1);
    EXPECT_NE(ex.a, ex.b);
}

TEST(test_suite_name, test_name)
{
    auto ex = example{};
    EXPECT_EQ(ex.instances, 1);
    {
        auto ex_copy = ex;
        EXPECT_EQ(ex.instances, 2);
    }
    EXPECT_EQ(ex.instances, 1);
}
