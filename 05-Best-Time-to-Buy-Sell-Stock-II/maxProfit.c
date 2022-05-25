#include <stdio.h>

int maxProfit(int *prices, int pricesSize)
{
    if (pricesSize <= 1)
        return 0;

    int max = 0;
    int profit;
    profit = maxProfit(prices, pricesSize - 1);
    if (profit > max)
        max = profit;

    for (int i = 1; i <= pricesSize - 1; i++)
    {
        profit = maxProfit(prices, i) + prices[pricesSize - 1] - prices[i - 1];
        if (profit > max)
            max = profit;
    }
    return max;
}

int main(int argc, char const *argv[])
{
    /* code */
    int prices[] = {7, 1, 5, 3, 6, 4};
    int res = maxProfit(prices, 6);
    printf("%d\n", res);
    return 0;
}
