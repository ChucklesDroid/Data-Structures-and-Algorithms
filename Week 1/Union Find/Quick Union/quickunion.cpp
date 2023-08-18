// QuickFind dataStructure in C++
// It is also slow but better than Quick find in some aspects although can be worse too.

#include <iostream>
#include <vector>

using namespace std;

class QuickUnion
{
private:
    vector<int> array;

public:
    QuickUnion(int N) {
        for(int index = 0; index < N; index++)
            array.push_back(index);
    }

    int root(int p) {
        while(array.at(p) != p)
            p = array.at(p);
        return p;
    }

    bool connected(int p, int q) {
        return root(p) == root(q);
    }

    void Union(int p, int q) {
        int leftR = root(p);
        int rightR = root(q);
        array.at(leftR) = rightR;
    }

    void display() {
        for(int index = 0; index < array.size(); index++) {
            printf("%d ", array.at(index));
        }
        printf("\n");
    }
};

int main()
{
    QuickUnion array = QuickUnion(10);
    array.display();

    array.Union(4, 3);
    array.Union(3, 8);
    array.Union(6, 5);
    array.Union(9, 4);
    array.Union(2, 1);

    array.display();

    printf("array.connected(8, 9): %d\n", array.connected(8, 9));
}