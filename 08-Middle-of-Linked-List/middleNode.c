#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

// struct ListNode *middleNode(struct ListNode *head)
// {
//     int length = 0;
//     for (struct ListNode *cur = head; cur != NULL; cur = cur->next)
//     {
//         length++;
//     }
//     struct ListNode *result = head;
//     for (int i = 0; i < length / 2; i++)
//     {
//         result = result->next;
//     }
//     return result;
// };

struct ListNode *middleNode(struct ListNode *head)
{
    struct ListNode * fast = head;
    struct ListNode * slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
};

int main(int argc, char const *argv[])
{
    /* code */
    int input[] = {1, 2, 3, 4, 5};
    int size = 5;
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *cur = head;

    for (int i = 0; i < size; i++)
    {
        cur->val = input[i];
        if (size - i != 1)
        {
            cur->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            cur = cur->next;
        }
    }

    struct ListNode *res = middleNode(head);
    printf("result:%d\n", res->val);

    int input1[] = {1, 2, 3, 4, 5, 6};
    int size1 = 6;
    struct ListNode *head1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *cur1 = head1;
    for (int i = 0; i < size1; i++)
    {
        cur1->val = input1[i];
        if (size1 - i != 1)
        {
            cur1->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            cur1 = cur1->next;
        }
    }
    res = middleNode(head1);
    printf("result:%d\n", res->val);

    return 0;
}
