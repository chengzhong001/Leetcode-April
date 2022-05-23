#include <stdio.h>

// int singleNumber(int *nums, int numsSize)
// {
//     for (int i = 0; i < numsSize; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < numsSize; j++)
//         {
//             if (nums[i] == nums[j])
//                 count++;
//         }
//         if (count == 1)
//             return nums[i];
//     }
//     return -1;
// }

int singleNumber(int *nums, int numsSize)
{
    int n = nums[0];
    for (int i = 0; i < numsSize; i++)
    {
        n = n ^ nums[i];
    }
    return n;
}

int main(int argc, char const *argv[])
{
    /* code */
    int nums[] = {2, 2, 1};
    int result = singleNumber(nums, 3);
    printf("singleNumber result: %d\n", result);

    return 0;
}
