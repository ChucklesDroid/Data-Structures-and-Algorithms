#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  bool hasDuplicate(vector<int> &nums) {
    int length = nums.size();
    for (int i = 0; i < length; i++) {
      for (int j = i + 1; j < length; j++) {
        if (nums[i] == nums[j]) {
          return true;
        }
      }
    }
    return false;
  }
};

int main() {
  Solution sol;
  vector<int> nums = {1, 2, 3, 4};

  if (sol.hasDuplicate(nums))
    cout << "Contains Duplicates\n";
  else
    cout << "Does Not Contain Duplicates\n";

  return 0;
}
