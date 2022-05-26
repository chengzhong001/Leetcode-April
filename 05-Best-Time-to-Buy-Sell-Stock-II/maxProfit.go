package main

import "fmt"

func maxProfit(prices []int) int {
	if len(prices) <= 1 {
		return 0
	}
	profits := make([]int, len(prices)+1)
	profits[1] = 0

	for k := 2; k <= len(prices); k++ {
		var profit int
		max := 0
		profit = profits[k-1]
		if profit > max {
			max = profit
		}

		for i := 1; i <= k-1; i++ {
			profit = profits[i] + prices[k-1] - prices[i-1]
			if profit > max {
				max = profit
			}
		}
		profits[k] = max
	}
	return profits[len(prices)]

}

func main() {
	prices := []int{7, 1, 5, 3, 6, 4}
	res := maxProfit(prices)
	fmt.Println(res)
}
