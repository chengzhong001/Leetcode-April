package main

func next_n(n int) int {
	var sum int = 0
	for n > 0 {
		sum += (n % 10) * (n % 10)
		n /= 10
	}
	return sum
}

func isHappy(n int) bool {
	slow, fast := next_n(n), next_n(next_n(n))
	for slow != fast {
		slow = next_n(slow)
		fast = next_n(next_n(fast))
	}
	return fast == 1
}
func main() {
	println(isHappy(19))
	println(isHappy(2))
	println(isHappy(1))
}
