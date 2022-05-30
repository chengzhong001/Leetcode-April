package main

type Node struct {
	data int
	next *Node
}

func middleNode(head *Node) *Node {
	slow := head
	fast := head
	for fast != nil && fast.next != nil {
		fast = fast.next.next
		slow = slow.next
	}

	return slow
}

func main() {
	input := []int{1, 2, 3, 4, 5}
	head := &Node{}
	cur := head
	for i := range input {
		cur.data = input[i]
		if len(input)-i != 1 {
			cur.next = &Node{}
			cur = cur.next
		}
	}
	res := middleNode(head)
	println(res.data)
	// cur1 := head
	// for cur1 != nil {
	// 	println(cur1.data)
	// 	cur1 = cur1.next
	// }
}
