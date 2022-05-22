package main

func singleNumber(nums []int) int {
    res := nums[0]
    for _, num := range nums[1:] {
        res ^= num
    }
    return res
}

func main() {
    nums := []int{2, 2, 1}
    res := singleNumber(nums)
    println(res)

    nums = []int{4, 1, 2, 1, 2}
    res = singleNumber(nums)
    println(res)
}
