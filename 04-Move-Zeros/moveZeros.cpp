#include <vector>
#include <iostream>

void moveZeros(std::vector<int> &nums)
{

    auto it = nums.begin();
    for (auto k : nums)
    {
        if (k != 0)
        {
            *it = k;
            it++;
        }
    }

    for (; it != nums.end(); it++)
    {
        *it = 0;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    std::vector<int> nums = {0, 1, 0, 0, 3, 12};
    moveZeros(nums);
    for (int i : nums)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
