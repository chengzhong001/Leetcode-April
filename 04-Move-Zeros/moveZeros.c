#include <stdio.h>
#include <stdbool.h>

// void moveZeros(int *nums, int numsSize)
// {
//     while (true)
//     {
//         bool isOk = true;
//         for (int i = 0; i + 1 < numsSize; i++)
//         {
//             if (nums[i] == 0 && nums[i + 1] != 0)
//             {
//                 isOk=false;
//                 nums[i] = nums[i + 1];
//                 nums[i + 1] = 0;
//                 // break;
//             }
//         }
//         if (isOk)
//             break;
//     }
// }

// void moveZeros(int *nums, int numsSize)
// {
//     for (int k = 1; k < numsSize; k++)
//     {
//         for (int i = 0; i + 1 < numsSize; i++)
//         {
//             if (nums[i] == 0 && nums[i + 1] != 0)
//             {
//                 nums[i] = nums[i + 1];
//                 nums[i + 1] = 0;
//             }
//         }
//     }
// }

void moveZeros(int *nums, int numsSize)
{
    int j = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    while (j < numsSize)
    {
        nums[j] = 0;
        j++;
    }
}

int main(int argc, char const *argv[])
{
    int nums[] = {0, 1, 0, 0, 3, 12};
    // int nums[] = {3,12,0,0,1};
    int numsSize = 6;
    moveZeros(nums, numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
