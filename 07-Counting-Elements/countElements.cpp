#include <vector>
#include <algorithm>
#include <iostream>

int countElements(std::vector<int> arr)
{
    // std::sort(arr.begin(), arr.end(), std::less<int>());
    std::sort(arr.begin(), arr.end(), [](int a, int b)
              { return a < b; });
    int count = 0;
    int number = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] == arr[i - 1] + 1)
                count += number;
            number = 1;
        }
        else
        {
            number++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    /* code */
    std::vector<int> arr = {1, 2, 3};
    int res = countElements(arr);
    std::cout << "countElements: " << res << std::endl;
    arr = {1, 1, 3, 3, 5, 5, 7, 7};
    res = countElements(arr);
    std::cout << "countElements: " << res << std::endl;
    arr = {1, 3, 2, 3, 5, 0};
    res = countElements(arr);
    std::cout << "countElements: " << res << std::endl;
    return 0;
}
