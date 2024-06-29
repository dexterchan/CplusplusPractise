#include <iostream>

void print(int *nums, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << nums[i] << ",";
    }
    std::cout << std::endl;
}
std::pair<int, int> binary_search(int *nums, int size, int value)
{
    if (size == 0)
        return std::pair<int, int>(0, -1);

    auto left = 0;
    auto right = size - 1;

    while (left <= right)
    {
        auto mid = (right + left) >> 1;

        if (nums[mid] == value)
            return std::pair<int, int>(mid, mid);
        else if (value < nums[mid])
        {
            right = mid - 1;
        }

        else if (nums[mid] < value)
        {
            left = mid + 1;
        }
    }

    return std::pair<int, int>(left, right);
}
