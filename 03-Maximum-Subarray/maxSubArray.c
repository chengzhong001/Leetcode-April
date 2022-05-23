#include <stdio.h>
#include <limits.h>

int maxSubArray(int *nums, int numsSize)
{
    int max = nums[0];
    for (int i = 0; i < numsSize; i++)
    {
        int sum = 0;
        for (int j = i; j < numsSize; j++)
        {
            
            // for (int k = i; k <= j; k++)
            // {
            //     sum += nums[k];
            // }
            sum += nums[j];
            if(sum > max)
                max = sum;
      
        }
    }
    
    return max;
}

int main(int argc, char const *argv[])
{
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int res = maxSubArray(nums, 9);
    printf("maxSubArray: %d\n", res);
    return 0;
}
