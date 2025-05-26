// Problem: Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate/
// Solution: Map Approach
// Time Complexity: O(logn) - RBT (std::map)
// Time Complexity: O(n) ~ hash maps (std::unordered_map) / O(1) in ideal case(avg case) depending upon hash collisions, hash functions and input length
// Space Complexity: O(n)~ same for both ordered and unordered maps

#include <iostream>
// #include <map>
#include <unordered_map>
#include <vector>

class Solution {
public:
  // bool containsDuplicate(std::vector<int> &nums) {
  //   std::map<int, int> mp;
  //   for (auto &elem : nums) {
  //     mp[elem]++;
  //   }
  //   // C++ 11 method
  //   for (auto &elem : mp) {
  //     if (elem.second >= 2)
  //       return true;
  //   }
  //
  //   // C++ 17 method
  //   for (const auto& [key, value] : nums) {
  //     if (value > 1) 
  //         return true;
  //   }
  //   return false;
  // }

  bool containsDuplicate(std::vector<int> &nums) {
    std::unordered_map<int, int> mp;
    for (auto &elem : nums) {
      mp[elem]++;
    }
    for (auto &elem : nums) {
      if (mp[elem] >= 2) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  Solution solution;
  std::vector<int> nums = {1, 2, 3, 1};
  auto duplicates = solution.containsDuplicate(nums);
  std::cout << "Contains Duplicates" << duplicates;
  return 0;
}
