#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    return nums.size() != set<int>(nums.begin(), nums.end()).size();
  }
};

int main() {
  Solution sol;
  vector<int> nums = {1, 2, 3, 4};

  if (sol.containsDuplicate(nums)) {
    cout << "Contains Duplicate\n";
  } else {
    cout << "Does Not Contain Duplicate\n";
  }

  return 0;
}
