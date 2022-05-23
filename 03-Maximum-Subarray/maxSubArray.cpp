#include <vector>
#include <iostream>

int maxSubArray(std::vector<int>& nums){
    int max = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            if(sum > max)
                max = sum;
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int res = maxSubArray(nums);
    std::cout << "maxSubArray:" << res << std::endl;
    return 0;
}
