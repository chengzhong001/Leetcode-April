def next_n(n):
    sum = 0
    while n > 0:
        sum += (n % 10) ** 2
        n //= 10
    return sum


def isHappy(n):
    slow, fast = next_n(n), next_n(next_n(n))
    while slow != fast:
        slow, fast = next_n(slow), next_n(next_n(fast))
    return fast == 1


if __name__ == "__main__":
    print(isHappy(82))
