#ifndef QUICK_SORT
#define QUICK_SORT

template <class T>
T *quick_sort(T *nums, int size)
{
    std::function<void(int, int)> _quick_sort;
    _quick_sort = [&, nums](int lo, int hi)
    {
        if (lo >= hi)
            return;
        int i = lo, j = hi + 1;

        while (true)
        {
            while ((nums[++i] < nums[lo]) && (i < hi))
                ;
            while ((nums[--j] > nums[lo]) && (j > lo))
                ;
            if (i >= j)
                break;
            std::swap(nums[i], nums[j]);
        }
        std::swap(nums[lo], nums[j]);

        _quick_sort(lo, j - 1);
        _quick_sort(j + 1, hi);
    };

    _quick_sort(0, size - 1);
    return nums;
}

#endif