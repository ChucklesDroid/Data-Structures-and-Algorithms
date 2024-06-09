// Problem: Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate/
// Solution: Unordered Set with smart pointers
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <memory>
#include <unordered_set>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    auto st =
        std::make_unique<std::unordered_set<int>>(nums.begin(), nums.end());
    return st->size() < nums.size();
  }
};

int main() {
  Solution solution;
  auto nums = std::vector<int>{2, 3, 4, 2};
  std::cout << solution.containsDuplicate(nums);
}
