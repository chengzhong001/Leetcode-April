#include <iostream>
#include <vector>

int maxProfit(std::vector<int> prices)
{
    if (prices.size() <= 1)
        return 0;
    int profits[prices.size() + 1];
    // for (auto i : profits)
    // {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    profits[1] = 0;
    for (int k = 2; k <= prices.size(); k++)
    {
        int profit;
        int max = 0;
        profit = profits[k - 1];
        for (auto i : profits)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
        // std::cout << "profit:" << profit << " ";
        if (profit > max)
        {
            max = profit;
        }
        for (int i = 1; i <= k - 1; i++)
        {
            profit = profits[i] + prices[k - 1] - prices[i - 1];
            if (profit > max)
                max = profit;
        }

        profits[k] = max;
    }
    return profits[prices.size()];
}

int main(int argc, char const *argv[])
{
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    int res = maxProfit(prices);
    std::cout << "maxProfit: " << res << std::endl;
    return 0;
}
