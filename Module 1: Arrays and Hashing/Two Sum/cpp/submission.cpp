// Problem: Two Sums
// Link: https://leetcode.com/problems/two-sum/
// Solution: submission using hashmaps (Two pass)
// Time Complexity: O(n)
// Space Complexity: O(n) + O(2) + O(4)

#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    // creating the hash map
    // time complexity: O(n)
    // Space Complexity: O(n)
    std::unordered_map<int, std::vector<int>> mp;

    // initialisation in for based range loops is C++ 20 feat
    for (int i = 0; auto &elem : nums) {
      if (mp.find(elem) == mp.end()) {
        // creating a vector, space complexity: O(2)
        mp[elem] = std::vector{i};
        i++;
        continue;
      }
      mp[elem].emplace_back(i);
    }

    // checking if element exists and return a vector of indices
    for (auto &elem : nums) {
      if (mp.find(target - elem) != mp.end()) {
        if (elem == (target - elem) && mp[elem].size() < 2) {
          continue;
        }

        // Element exists now return its indices
        // space complexity: O(4)
        std::vector<int> return_vector;
        for (auto &obj : mp[elem]) {
          return_vector.emplace_back(obj);
        }

        if (elem != (target - elem)) {
          for (auto &obj : mp[target - elem]) {
            return_vector.emplace_back(obj);
          }
        }
        return return_vector;
      }
    }
    return std::vector<int>{0};
  }
} solution;

int main() {
  std::vector<int> nums = {2, 7, 2, 15};
  auto sol = solution.twoSum(nums, 4);
  for (auto &elem : sol) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}
