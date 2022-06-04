class TreeNode:
    def __init__(self) -> None:
        self.values = 0
        self.left = None
        self.right = None


def maxDepth(root: TreeNode):
    if root == None:
        return 0
    leftDepth = maxDepth(root.left)
    rightDepth = maxDepth(root.right)
    return max(leftDepth, rightDepth) + 1


def diameterOfBinaryTree(root: TreeNode):
    if root == None:
        return 0
    middle = maxDepth(root.left) + maxDepth(root.right)
    leftDiameter = diameterOfBinaryTree(root.left)
    rightDiameter = diameterOfBinaryTree(root.right)
    return max(middle, leftDiameter, rightDiameter)
