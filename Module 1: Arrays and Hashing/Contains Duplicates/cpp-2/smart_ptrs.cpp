#include <initializer_list>
#include <iostream>
#include <set>
#include <vector>
#include <memory>

using namespace std;

class Solution {
public:
    bool containsDuplicate(weak_ptr<vector<int>> nums) {
        int lstLen, vecLen;
        if (auto sp = nums.lock()) {
            vecLen = sp->size();
            set<int> lst(sp->begin(), sp->end());
            lstLen = lst.size();
        }
        return vecLen != lstLen;
    }
};

int main() {
    Solution sol;
    shared_ptr<vector<int>> nums = make_shared<vector<int>>(initializer_list<int>{1, 2, 3, 4}); 
    if(sol.containsDuplicate(nums)) {
        cout << "Contains Duplicates\n";
    } else {
        cout << "Does Not Contain Duplicates\n";
    }
    return 0;
}
