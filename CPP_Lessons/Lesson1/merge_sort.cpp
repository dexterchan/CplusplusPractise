#include <iostream>
#include <functional>

using namespace std;

int sayhello()
{
    std::cout << "Hello" << std::endl;
    return 0;
}

int *merge_sort(int *nums, int size)
{
    int *buffer = (int *)malloc(sizeof(int) * size);
    std::function<void(int, int)> _recur;
    _recur = [&, nums, buffer](int head, int tail)
    {
        if (tail - head + 1 <= 1)
            return;

        int mid = (tail + head) >> 1;
        _recur(head, mid);
        _recur(mid + 1, tail);

        int l_ptr = head, r_ptr = mid + 1, n_ptr = l_ptr;
        while (n_ptr <= tail)
        {
            if (l_ptr <= mid && r_ptr <= tail)
            {
                buffer[n_ptr++] = (nums[l_ptr] <= nums[r_ptr])
                                      ? nums[l_ptr++]
                                      : nums[r_ptr++];
            }
            else if (l_ptr <= mid)
                buffer[n_ptr++] = nums[l_ptr++];
            else
                buffer[n_ptr++] = nums[r_ptr++];
        }
        for (int i = head; i <= tail; i++)
            nums[i] = buffer[i];
    };
    _recur(0, size - 1);
    free(buffer);
    return nums;
}