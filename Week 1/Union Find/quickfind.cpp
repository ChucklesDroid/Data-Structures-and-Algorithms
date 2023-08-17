// QuickFind (Union Find) data structure. It has time constant of O(n^2)
#include <iostream>
#include <vector>
using namespace std;

class QuickFindUf
{
public:
    vector<int> array;
    QuickFindUf(int N) {
        for(int index = 0; index < N; index++)
            array.push_back(index);
    }

    int Connected(int p, int q) {
        return array.at(p) == array.at(q);
    }

    void Union(int p, int q) {
        int pid = array.at(p);
        for(int index = 0; index < array.size(); index++) 
            if(array.at(index) == pid)
                array.at(index) = array.at(q);
    }
    void display() {
        for(int index = 0; index < array.size(); index++)
            printf("%d ", array.at(index));
        printf("\n");
    }
};

int main()
{
    QuickFindUf victim(10);
    victim.display();
    victim.Union(4, 3);
    victim.Union(3, 8);
    victim.Union(6, 5);
    victim.Union(9, 4);
    victim.Union(2, 1);
    victim.display();
    printf("victim.connected(8,9): %d\n", victim.Connected(8, 9));
    printf("victim.connected(5,0): %d\n", victim.Connected(5, 0));
}