def singleNumber(nums: list[int]) -> int:
    """
    :type nums: list[int]
    :rtype: int
    """
    n = nums[0]
    for i in range(1, len(nums)):
        n = n ^ nums[i]
    return n


if __name__ == "__main__":
    nums = [2, 2, 1]
    print(f"{singleNumber(nums)}")
    nums = [4, 1, 2, 1, 2]
    print(f"{singleNumber(nums)}")
