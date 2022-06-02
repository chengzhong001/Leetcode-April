class Stack:
    def __init__(self) -> None:
        self.data = []
        self.size = 0

    def push(self, x: int):
        self.data.append(x)
        self.size += 1

    def pop(self):
        value = self.data.pop()
        self.size -= 1
        return value

    def top(self):
        return self.data[-1]

    def printStack(self):
        for i in self.data:
            print(i, end=" ")
        print()

if __name__ == "__main__":
    stack = Stack()
    stack.push(10)
    stack.push(20)
    stack.push(30)
    stack.printStack()
    print(stack.size)
    print(stack.top())
    stack.pop()
    stack.printStack()
    print(stack.size)
    print(stack.top())

