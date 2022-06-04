#include <iostream>

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
};

int maxDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}

int diameterOfBinaryTree(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int middle = maxDepth(root->left) + maxDepth(root->right);
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return std::max(middle, std::max(left, right));
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
