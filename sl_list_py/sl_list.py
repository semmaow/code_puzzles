class LinkedListNode(object):

    def __init__(self, value):
        self.value = value
        self.next  = None

    #uses a fast runner and a slow runner to check for loops in linked list
    def runners(self):
        fast_runner = self
        slow_runner = self
        while slow_runner.next != None:
            print "fast =", fast_runner.value
            print "slow =", slow_runner.value
            if fast_runner.next.next == None:
                return False
            else:
                fast_runner = fast_runner.next.next

            slow_runner = slow_runner.next

            if fast_runner == slow_runner:
                return True

        return False

    #uses a set to check for loops in a linked list
    def with_set(self):
        node_set = set([self])
        runner = self.next
        while runner != None:
            print runner.value
            if runner in node_set:
                return True
            node_set.add(runner)
            runner = runner.next
    
        return False





first = LinkedListNode(5)
second = LinkedListNode(4)
first.next = second
third = LinkedListNode(3)
second.next = third 
fourth = LinkedListNode(2)
third.next = fourth
fifth = LinkedListNode(1)
fourth.next = fifth
sixth = LinkedListNode(0)
fifth.next = sixth

print first.runners()
print first.with_set()

sixth.next = third

print first.runners()
print first.with_set()

