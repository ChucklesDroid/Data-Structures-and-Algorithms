// Problem: Two Sums
// Link: https://leetcode.com/problems/two-sum/
// Solution: submission using hashmaps (One pass)
// Time Complexity: O(n)
// Space Complexity: O(n) + O(2) + O(4)

#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> nums, int target) {
    std::unordered_map<int, std::vector<int>> mp;
        
    // checks if the target is present inside the vector and adds it to the hash map
    for (int i = 0; i < nums.size(); i++) {
      if (nums.at(target - i))
    }
  }

} solution;

int main() {}
