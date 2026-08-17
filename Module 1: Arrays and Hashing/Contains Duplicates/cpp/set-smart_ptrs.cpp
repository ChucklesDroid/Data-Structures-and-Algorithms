// Problem: Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate/
// Solution: Unordered Set with smart pointers
// Time Complexity: O(n)
// Space Complexity: O(n)

// #include <iostream>
// #include <memory>
// #include <unordered_set>
// #include <vector>
//
// class Solution {
// public:
//   bool containsDuplicate(std::vector<int> &nums) {
//     auto st =
//         std::make_unique<std::unordered_set<int>>(nums.begin(), nums.end());
//     return st->size() < nums.size();
//   }
// };
//
// int main() {
//   Solution solution;
//   auto nums = std::vector<int>{2, 3, 4, 2};
//   std::cout << solution.containsDuplicate(nums);
// }


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
    shared_ptr<vector<int>> nums = make_shared<vector<int>>(initializer_list<int>{1, 2, 3, 3}); 
    if(sol.containsDuplicate(nums)) {
        cout << "Contains Duplicates\n";
    } else {
        cout << "Does Not Contain Duplicates\n";
    }
    return 0;
}
