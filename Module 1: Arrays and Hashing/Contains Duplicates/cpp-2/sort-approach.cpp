#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int len = nums.size();
            for (int i = 0; i < (len-1); i++) {
                if (nums[i] == nums[i+1]) {
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
        cout << "Does not contain Duplicates\n";
    }

    return 0;
}
