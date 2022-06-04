package main

import "math"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func maxDepth(root *TreeNode) int {
	if root == nil {
		return 0
	}
	leftDepth := maxDepth(root.Left)
	rightDepth := maxDepth(root.Right)
	return int(math.Max(float64(leftDepth), float64(rightDepth))) + 1
}

func diameterOfBinaryTree(root *TreeNode) int {
	if root == nil {
		return 0
	}
	middle := maxDepth(root.Left) + maxDepth(root.Right)
	left := maxDepth(root.Left)
	right := maxDepth(root.Right)
	return int(math.Max(float64(middle), float64(math.Max(float64(left), float64(right)))))
}

func main() {

}
