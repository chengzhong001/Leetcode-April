#include <stdio.h>

// int maxProfit(int *prices, int pricesSize)
// {
//     if (pricesSize <= 1)
//         return 0;

//     int max = 0;
//     int profit;
//     profit = maxProfit(prices, pricesSize - 1);
//     if (profit > max)
//         max = profit;

//     for (int i = 1; i <= pricesSize - 1; i++)
//     {
//         profit = maxProfit(prices, i) + prices[pricesSize - 1] - prices[i - 1];
//         if (profit > max)
//             max = profit;
//     }
//     return max;
// }

// int maxProfit(int *prices, int pricesSize){
//     int total = 0;
//     for (int i = 0; i +1< pricesSize; i++)
//     {
//         if(prices[i] < prices[i+1])
//             total += prices[i+1] - prices[i];
//     }
//     return total;
    
// }

int maxProfit(int *prices, int pricesSize)
{
    if (pricesSize <= 1)
        return 0;

    int profits[pricesSize + 1];

    profits[1] = 0;

    for (int k = 2; k <= pricesSize; k++)
    {
        int profit;
        int max = 0;
        profit = profits[k - 1];

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
    return profits[pricesSize];
}

int main(int argc, char const *argv[])
{
    /* code */
    int prices[] = {7, 1, 5, 3, 6, 4};
    int res = maxProfit(prices, 6);
    printf("%d\n", res);
    return 0;
}
