// Problem: Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate/
// Solution: Sort approach
// Time Complexity: O(n*logn)
// Space Complexity: O(1)

#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for (const auto &elem : nums) {
      if (elem == *(&elem + 1)) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  Solution solution;
  std::vector<int> nums = std::vector{1, 2, 3, 4, 1};
  auto duplicates = solution.containsDuplicate(nums);
  std::cout << "Duplicates: " << duplicates;
}
