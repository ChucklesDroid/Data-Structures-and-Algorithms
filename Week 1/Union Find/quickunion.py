# QuickUnion datastructure, It is also slow but better than Quick find in some aspects although can be worse too.

class QuickUnion:
    def __init__(self, N):
        self.array = [i for i in range(N)]

    def root(self, p):
        while(p != self.array[p]):
            p = self.array[p]
        return p

    def connected(self, p, q):
        return self.root(p) == self.root(q)

    def union(self, p, q):
       leftR = self.root(p) 
       rightR = self.root(q) 
       self.array[leftR] = rightR

    def display(self):
        index = 0
        while(index < len(self.array)):
            print(self.array[index], end=" ")
            index += 1
        print()
    

victim = QuickUnion(10)
victim.display()

victim.union(4, 3)
victim.union(3, 8)
victim.union(6, 5)
victim.union(9, 4)
victim.union(2, 1)

victim.display()

print(victim.connected(8, 9))