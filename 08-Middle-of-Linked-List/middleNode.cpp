#include <iostream>

class Node
{
public:
    int val;
    Node *next;
};

Node *middleNode(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main(int argc, char const *argv[])
{
    int input[] = {1, 2, 3, 4, 5};
    int size = 5;
    Node *head = new Node();
    Node *cur = head;

    for (int i = 0; i < size; i++)
    {
        cur->val = input[i];
        if (size - i != 1)
        {
            cur->next = new Node();
            cur = cur->next;
        }
    }

    Node *res = middleNode(head);
    printf("result:%d\n", res->val);
    return 0;
}
