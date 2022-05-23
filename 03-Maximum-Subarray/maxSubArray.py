def subMaxArray(nums: list[int]):
    max = nums[0]
    for i, v in enumerate(nums):
        sum = 0
        for j in nums[i:]:
            sum += j
            if sum > max:
                max = sum
    return max


if __name__ == "__main__":
    nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    res = subMaxArray(nums)
    print(f"subMaxArray:{res}")
