# QuickFind(Union Find) Data Structure
# It has O(n^2) time constant which is not ideal

class QuickFindUF:
    def __init__(self, N):
        self.id = [i for i in range(N)]

    def connected(self, p, q):
        return self.id[p] == self.id[q]

    def union(self, p, q):
        index = 0
        pid = self.id[p]
        while(index < len(self.id)):
            if (self.id[index] == pid):
                self.id[index] = self.id[q]
            index += 1

victim = QuickFindUF(10)
count = 0
while (count < len(victim.id)):
    print(victim.id[count], end=" ")
    count += 1
print()

victim.union(4, 3)
victim.union(3, 8)
victim.union(6, 5)
victim.union(9, 4)
victim.union(2, 1)

count = 0
while (count < len(victim.id)):
    print(victim.id[count], end=" ")
    count += 1
print()
print(victim.connected(8,9))
print(victim.connected(5,0))