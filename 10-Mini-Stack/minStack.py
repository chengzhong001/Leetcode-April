class Stack:
    def __init__(self) -> None:
        self.data = []
        self.mins = []
        self.size = 0

    def push(self, x: int):
        self.data.append(x)
        if self.mins:
            self.mins.append(min(x, self.mins[-1]))
        else:
            self.mins.append(x)
        self.size += 1

    def pop(self):
        if self.data:
            self.data.pop()
            self.mins.pop()
            self.size -= 1

    def top(self):
        if self.data:
            return self.data[-1]
        else:
            return None

    def getMin(self) -> int:
        if self.mins:
            return self.mins[-1]
        return None

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
