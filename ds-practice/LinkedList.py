class Node:
    def __init__(self, val):
        self.data = val
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_end(self, val):
        newNode = Node(val)
        if self.head is None:
            self.head = newNode
            return
        
        current = self.head
        while current.next:
            current = current.next

        current.next = newNode

    def insert_at_beginning(self, val):
        newNode = Node(val)
        newNode.next = self.head
        self.head = newNode

    def insert_at_position(self, val, pos):
        newNode = Node(val)
        if pos == 0:
            self.insert_at_beginning(val)
            return
        
        temp = 1
        current = self.head
        
        while (temp < pos and current):
            temp += 1
            current = current.next

        tempNode = current.next
        current.next = newNode
        newNode.next = tempNode

    def __repr__(self):
        current = self.head
        res = "List: "

        while current:
            res += str(current.data) + " "
            current = current.next

        return res
        

    def reverse(self):
        current = self.head
        nextNode = None
        prev = None

        while current:
            nextNode = current.next
            current.next = prev
            prev = current
            current = nextNode

        self.head = prev

    def remove_from_beginning(self):
        if self.head:
            head = head.next
        
        return
    
    def remove_from_end(self):
        if self.head:
            current = self.head
            
            while current.next.next:
                current = current.next

            current.next = None

        return
    
    def remove_from_position(self, pos):
        if self.head:
            current = self.head
            temp = 1

            while temp < pos and current.next.next:
                current = current.next
                temp += 1

            current.next = current.next.next

        return
    

ll = LinkedList()
for i in range(1, 11):
    ll.insert_at_end(i)

print(ll)

ll.reverse()
print(ll)

ll.insert_at_position(99, 0)
print(ll)

ll.remove_from_position(7)
print(ll)