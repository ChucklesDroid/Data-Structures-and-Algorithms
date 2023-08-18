# Weighted Quick Union (Union Find) is a data structure which improves upon the regular quick union by making sure trees dont get to large by maintaining]
# a seperate array for keeping track of size.
# NOTE: size here refers to the number of objects in the connected component. For example sz[i] means size of connected component with i as root

class WeightedQuickUnionUF:
    def __init__(self, N):
        self.array = [i for i in range(N)]
        self.sz = [1 for i in range(N)]

    def root(self, p):
        while(self.array[p] != p):
            p = self.array[p]
        return p

    def union(self, p, q):
        leftR = self.root(p)
        rightR = self.root(q)
        if(self.sz[leftR] < self.sz[rightR]):
            self.array[leftR] = rightR
            self.sz[rightR] += self.sz[leftR]
        else:
            self.array[rightR] = leftR
            self.sz[leftR] += self.sz[rightR]

    def connected(self, p, q):
        return self.root(p) == self.root(q)

    def display(self):
        for node in range(len(self.array)):
            print(self.array[node], end=" ")
        print()

    def displaySz(self):
        for node in range(len(self.sz)):
            print(self.sz[node], end=" ")
        print()

victim = WeightedQuickUnionUF(10)
victim.display()
victim.displaySz()
victim.union(4, 3)
victim.union(3, 8)
victim.union(6, 5)
victim.union(9, 4)
victim.union(2, 1)
victim.union(5, 0)
victim.union(7, 2)
victim.union(6, 1)
victim.union(7, 3)

victim.display()
victim.displaySz()