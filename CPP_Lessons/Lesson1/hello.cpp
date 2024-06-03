#include <iostream>
#include "merge_sort.h"
#include <functional>



int* func(int *nums, int size)
{
    int* buffer = (int*) malloc(sizeof(int) * size);  
    std::function<void(int, int)> _recur;
    _recur = [&, buffer, nums] (int head, int tail)
    {   
        int length = tail - head + 1;
        if (length <= 1) return;
        
        int mid = (tail + head) >> 1;
        _recur(head, mid); _recur(mid+1, tail);

        int l_ptr = head, r_ptr = mid+1, n_ptr = l_ptr;
        while(n_ptr <= tail){
            if (l_ptr<=mid && r_ptr<=tail){
                if (nums[l_ptr] <= nums[r_ptr]){
                    buffer[n_ptr] = nums[l_ptr++];
                }else{
                    buffer[n_ptr] = nums[r_ptr++];
                }
            }else if (l_ptr <= mid) buffer[n_ptr] = nums[l_ptr++];
            else buffer[n_ptr] = nums[r_ptr++];
            n_ptr++;
        }
        for (int i=head; i<=tail; i++) nums[i] = buffer[i];
    };
    _recur(0, size-1);
    free(buffer);
    return nums;
}

void run_sort(){
    int nums[] = {14, 11, 9, 5, 12, 5, 13, 16, 7, 17};
    int length = sizeof(nums) / sizeof(int);

    func(nums, length);
    for (int i=0; i<length; i++){
        std::cout<<nums[i]<<",";
    }
    std::cout<<std::endl;
}


int main(int argc, char **argv)
{
    std::cout << "Hello, World!" << std::endl;
    run_sort();
    return 0;
}

