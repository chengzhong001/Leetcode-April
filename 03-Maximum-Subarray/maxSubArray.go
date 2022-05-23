package main

import "fmt"

// func maxSubArray(nums []int) int {
// 	max := nums[0]
// 	sum := 0
// 	for _, n := range nums {
// 		if sum < 0 {
// 			sum = n
// 		} else {
// 			sum += n
// 		}
// 		if sum > max {
// 			max = sum
// 		}
// 	}
// 	return max
// }

func maxSubArray(nums []int) int {
	max := nums[0]
	for i := range nums {
		sum := 0
		for _, v := range nums[i:] {
			sum += v
			if sum > max {
				max = sum
			}
		}
	}
	return max
}

func main() {
	// nums := []int{-2, 1, -3, 4, -1, 2, 1, -5, 4}
	var nums []int = []int{-2, -3 -1}
	res := maxSubArray(nums)
	fmt.Printf("maxSubArray: %d\n", res)
}
