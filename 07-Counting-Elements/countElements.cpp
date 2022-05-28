#include <vector>

int countElements(std::vector<int> arr)
{
    
    return 0;
}

int main(int argc, char const *argv[])
{
    /* code */
    std::vector<int> arr = {1, 2, 3};
    int res = countElements(arr);

    arr = {1, 1, 3, 3, 5, 5, 7, 7};
    res = countElements(arr);

    arr = {1, 3, 2, 3, 5, 0};
    int res2 = countElements(arr);

    return 0;
}
