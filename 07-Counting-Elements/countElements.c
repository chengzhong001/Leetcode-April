#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// int countElements(int *arr, int arrSize)
// {
//     int count = 0;
//     for (int i = 0; i < arrSize; i++)
//     {
//         int ele_plus = arr[i] + 1;
//         for (int j = 0; j < arrSize; j++)
//         {
//             if (ele_plus == arr[j])
//             {
//                 count++;
//                 break;
//             }
//         }
//     }
//     return count;
// }

// int countElements(int *arr, int arrSize)
// {
//     int count = 0;
//     bool isFound[1002] = {false};
//     for (int i = 0; i < arrSize; i++)
//         isFound[arr[i]] = true;

//     for (int i = 0; i < arrSize; i++)
//     {
//         int ele_plus = arr[i] + 1;
//         if (isFound[ele_plus])
//             count++;
//     }
//     return count;
// }

int cmp(const void *a, const void *b)
{
    return *(const int *)a - *(const int *)b;
}

int countElements(int *arr, int arrSize)
{
    //        arr {1, 3, 2, 3, 5, 0}
    // sorted_arr {0, 1, 2, 3, 3, 5}
    //     number {1, 1, 1, 1, 1, 1}
    //      count {1, 1, 1, 0, 0, 0}
    int count = 0; 
    int number = 1;
    qsort(arr, arrSize, sizeof(int), cmp);
    for (int i = 1; i < arrSize; i++)
    {
        if(arr[i] != arr[i-1]){
            if(arr[i]==arr[i-1]+1)
                count += number;
            number = 1;
        }
        else{
            number++;
        }
    }
    

    return count;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};
    int res = countElements(arr, 3);
    printf("count Elements: %d\n", res);
    int arr1[] = {1, 1, 3, 3, 5, 5, 7, 7};
    res = countElements(arr1, 8);
    printf("count Elements: %d\n", res);
    int arr2[] = {1, 3, 2, 3, 5, 0};
    int res2 = countElements(arr2, 6);
    printf("count Elements: %d\n", res2);
    return 0;
}
