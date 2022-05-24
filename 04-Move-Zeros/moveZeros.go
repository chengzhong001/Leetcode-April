package main

import "fmt"

func moveZeros(nums []int) {
	var j int = 0
	for i := range nums {
		if nums[i] != 0 {
			nums[j] = nums[i]
			j++
		}
	}
	for j < len(nums) {
		nums[j] = 0
		j++
	}
}

func main() {
	nums := []int{0, 1, 0, 0, 3, 12}
	moveZeros(nums)
	for i := range nums {
		fmt.Printf("%d ", nums[i])
	}
	fmt.Println()

}
