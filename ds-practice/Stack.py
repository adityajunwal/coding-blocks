class Stack:
    def __init__(self):
        self.top = -1
        self.stack = []
        self.MAX = 100

    def push(self, num):
        if self.top == self.MAX-1:
            print(f"Cannot Push {num}, Stack Overflow!")    
        else:
            self.top += 1
            self.stack.append(num)
        
    def pop(self):
        if not self.is_empty():
            self.top -= 1
            return self.stack.pop()
        
        print("Cannot Pop, Stack Underflow!")

    def peek(self):
        return self.stack[self.top]
    
    def is_empty(self):
        return self.top == -1
    
    def __repr__(self):
        return f"Stack: {self.stack}"




st1 = Stack()
st1.push(5)
st1.push(6)
st1.push(7)

print(st1)

# st1.push(8)