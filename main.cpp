#include <iostream>

#include <gtest/gtest.h>

#include "test.cpp"

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);

    auto err = RUN_ALL_TESTS();
    if (!err) std::cout << "Done.";

    return err;
}