class QuickFindUF:
    def __init__(int N):
        index = 0
        id = [0]
        while (++index < N):
            id.append(index)

    def connected(p, q):
        return id[p] == id[q]

    def union(p, q):
        n = 0
        while(n < id.length()):
