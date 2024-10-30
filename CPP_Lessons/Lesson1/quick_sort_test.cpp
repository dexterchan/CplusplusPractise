#include <gtest/gtest.h>
#include "quick_sort.h"
#include "quick_sort.tpp"

// Demonstrate some basic assertions.
TEST(QuickSortTest, BasicAssertions)
{
    int nums[] = {14, 11, 9, 5, 12, 5, 13, 16, 7, 18};
    auto nums_size = sizeof(nums) / sizeof(int);
    quick_sort<int>(nums, nums_size);
    std::cout << nums[0] << ",";

    for (int i = 1; i < nums_size; i++)
    {
        std::cout << nums[i] << ",";
        EXPECT_LE(nums[i - 1], nums[i]);
    }
}