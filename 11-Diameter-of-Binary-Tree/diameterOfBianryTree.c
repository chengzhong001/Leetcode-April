#include <stdio.h>
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int maxDepth(struct TreeNode *root)
{
    if (root == NULL)
        return 0;
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
}

int diameterOfBinaryTree(struct TreeNode *root)
{
    if (root == NULL)
        return 0;
    int middle = maxDepth(root->left) + maxDepth(root->right);
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    int max = middle;
    if (left > max)
        max = left;
    if (right > max)
        max = right;

    return max;
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
