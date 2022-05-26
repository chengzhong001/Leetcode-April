

def maxProfit(prices: list):
    if len(prices) <= 1:
        return 0

    profits = [0, 0]
    

    for k in range(2, len(prices) + 1):
        max = 0
        profit = profits[k - 1]
        if profit > max:
            max = profit

        for i in range(1, k):
            profit = profits[i] + prices[k - 1] - prices[i - 1]
            if profit > max:
                max = profit
        profits.append(max)

    return profits[len(prices)]

if __name__ == "__main__":
    prices = [7, 1, 5, 3, 6, 4]
    res = maxProfit(prices)
    print(res)