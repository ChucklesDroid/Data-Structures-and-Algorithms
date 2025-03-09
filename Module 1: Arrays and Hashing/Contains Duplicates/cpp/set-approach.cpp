// Problem: Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate/
// Solution: Unordered set approach (Reference README to understand)
// Time Complexity: O(n) {Ordered set will give O(logn)}
// Space Complexity: O(n)

#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> nums) {
    // if the size of set is less than initial size then it contains duplicates
    return nums.size() >
        // check the constructor to see how to construct the object
        std::unordered_set<int>(nums.begin(), nums.end()).size();
  }
};

int main() {
  Solution solution;
  std::vector<int> nums = std::vector<int>{1, 2, 3, 4, 1};
  std::cout << "Duplicates" << solution.containsDuplicate(nums);
  return 0;
}
