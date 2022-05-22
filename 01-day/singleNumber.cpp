#include <vector>
#include <iostream>

int singleNumber(std::vector<int> &nums)
{
    int n = nums[0];
    for (size_t i = 1; i < nums.size(); i++)
        n = n ^ nums[i];
    return n;
}

int main(int argc, char const *argv[])
{
    /* code */
    std::vector<int> num = {4, 1, 2, 1, 2};
    int res = singleNumber(num);
    std::cout << "singleNumber: " << res << std::endl;
    return 0;
}
