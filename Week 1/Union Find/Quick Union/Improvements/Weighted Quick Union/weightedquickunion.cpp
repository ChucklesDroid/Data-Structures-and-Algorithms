#include <iostream>
#include <vector>

using namespace std;

class WeightedQuickUnion
{
private:
    vector<int> array;
    vector<int> sz;
public:
    WeightedQuickUnion(int N) {
        for(int index = 0; index < N; index++) 
            array.push_back(index);
        for(int index = 0; index < N; index++) 
            sz.push_back(1);
    }

    int root(int p) {
        while(array.at(p) != p) 
            p = array.at(p);
        return p;
    }

    void Union(int p, int q) {
        int leftR = root(p);
        int rightR = root(q);
        if(sz[leftR] < sz[rightR]) {
            array[leftR] = rightR;
            sz[rightR] += sz[leftR];
        } else {
            array[rightR] = leftR;
            sz[leftR] += sz[rightR];
        }
    }

    int connected(int p, int q) {
        return root(p) == root(q);
    }

    void display() {
        for(int index = 0; index < array.size(); index++)
            printf("%d ", array[index]);
        printf("\n");
    }

    void displaysz() {
        for(int index = 0; index < array.size(); index++)
            printf("%d ", sz[index]);
        printf("\n");
    }
};

int main()
{
    WeightedQuickUnion victim(10);
    victim.display();
    victim.displaysz();

    victim.Union(4, 3);
    victim.Union(3, 8);
    victim.Union(6, 5);
    victim.Union(9, 4);
    victim.Union(2, 1);
    victim.Union(5, 0);
    victim.Union(7, 2);
    victim.Union(6, 1);
    victim.Union(7, 3);

    victim.display();
    victim.displaysz();
}