def moveZeros(nums: list):
    j = 0
    for k in nums:
        if k != 0:
            nums[j] = k
            j += 1

    while j < len(nums):
        nums[j] = 0
        j += 1


if __name__ == "__main__":
    nums = [0, 1, 0, 0, 3, 12]
    moveZeros(nums)
    for i in nums:
        print(i, end=" ")
    print()
