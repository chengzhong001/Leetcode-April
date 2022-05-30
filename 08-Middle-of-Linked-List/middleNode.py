class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def minddleNode(head: Node) -> Node:
    slow = head
    fast = head
    while fast and fast.next:
        fast = fast.next.next
        slow = slow.next
    return slow


def minddleNode1(head: Node) -> Node:
    length = 0
    cur = head
    while cur:
        length += 1
        cur = cur.next

    result = head
    for i in range(length // 2):
        result = result.next
    return result


if __name__ == "__main__":
    all_nodes = [1, 2, 3, 4, 5]
    head = Node(None)

    cur = head
    for i in all_nodes:
        cur.data = i
        if i <= len(all_nodes) - 1:
            cur.next = Node(None)
            cur = cur.next

    res = minddleNode(head)
    print("minddleNode:", res.data)

    print(minddleNode1(head).data)
    # cur1 = head
    # while cur1:
    #     print(cur1.data)
    #     cur1 = cur1.next

    # all_nodes = [1, 2, 3, 4, 5, 6]
    # head = Node(None)

    all_nodes = [1, 2, 3, 4, 5, 6]
    head = Node(None)

    cur = head
    for i in all_nodes:
        cur.data = i
        if i <= len(all_nodes) - 1:
            cur.next = Node(None)
            cur = cur.next

    # cur1 = head
    # while cur1:
    #     print(cur1.data)
    #     cur1 = cur1.next
    res = minddleNode(head)
    print("minddleNode:", res.data)
