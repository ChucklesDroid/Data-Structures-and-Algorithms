// Problem: Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate/
// Solution: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i; j < nums.size(); j++) {
        if (nums.at(i) == nums.at(j)) {
          return true;
        }
      }
    }
    return false;
  }
};

int main() {
    Solution solution;
    /*This is wrong initialization, the comma operator just returns the rightmost operand so */
    /*in this case, its just returning 6.*/
    /*std::vector<int> test = std::vector<int>((1, 2, 3, 2, 4, 5, 6));*/

    /*"{}" is used for initializing containers*/
    std::vector<int> nums = {1, 2, 3, 1};
    auto duplicates = solution.containsDuplicate(nums);
    std::cout << "Contains Duplicates" << duplicates;
    return 0;
}
