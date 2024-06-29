#include <iostream>
#include "merge_sort.h"
#include "search.h"

void run_sort()
{
    int nums[] = {14, 11, 9, 5, 12, 5, 13, 16, 7, 18};
    int length = sizeof(nums) / sizeof(int);

    merge_sort(nums, length);
    for (int i = 0; i < length; i++)
    {
        std::cout << i << ":" << nums[i] << ",";
    }
    std::cout << std::endl;

    auto value = 11;
    auto res = binary_search(nums, length, value);
    std::cout << "find " << value << ":" << res.first << "," << res.second << std::endl;

    value = 100;
    res = binary_search(nums, length, value);
    std::cout << "find " << value << ":" << res.first << "," << res.second << std::endl;

    value = 17;
    res = binary_search(nums, length, value);
    std::cout << "find " << value << ":" << res.first << "," << res.second << std::endl;

    value = 3;
    res = binary_search(nums, length, value);
    std::cout << "find " << value << ":" << res.first << "," << res.second << std::endl;

    value = 5;
    res = binary_search(nums, length, value);
    std::cout << "find " << value << ":" << res.first << "," << res.second << std::endl;

    value = 12;
    res = binary_search(nums, length, value);
    std::cout << "find " << value << ":" << res.first << "," << res.second << std::endl;
}

int main(int argc, char **argv)
{
    std::cout << "Hello, World!" << std::endl;
    run_sort();
    return 0;
}
