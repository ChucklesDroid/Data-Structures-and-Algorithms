// Problem: Is Anagram
// Link: https://neetcode.io/problems/is-anagram
// Solution: Optimizing for space complexity
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

#include <algorithm>
#include <iostream>

class Solution {
public:
  bool isAnagram(std::string s, std::string t) {
    if (s.size() != t.size()) {
      return false;
    }
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    if (s == t) {
      return true;
    }
    return false;
  }
} solution;

int main() {
  std::string s = std::string{"acecar"};
  std::string t = std::string{"carrace"};
  std::cout << solution.isAnagram(s, t);
  return 0;
}
