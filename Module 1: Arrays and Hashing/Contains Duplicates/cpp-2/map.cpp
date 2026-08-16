#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  // bool containsDuplicate(vector<int>& nums) {
  //   map<int, int> mp;
  //   for (const auto &elem : nums) {
  //     mp[elem]++;
  //   }
  //
  //   for (const auto &[key, value] : mp) {
  //     if (value > 1)
  //       return true;
  //   }
  //
  //   return false;
  // }

  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, int> mp;
    for (const auto &elem : nums) {
      mp[elem]++;
    }

    for (const auto &[key, value] : mp) {
      if (value > 1) {
        return true;
      }
    }

    return false;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4};
  Solution sol;

  if (sol.containsDuplicate(nums)) {
    cout << "Contains Duplicate\n";
  } else {
    cout << "Does Not Contain Duplicate\n";
  }

  return 0;
}
