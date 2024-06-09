// Problem: Is Anagram
// Link: https://neetcode.io/problems/is-anagram
// Solution: Using hashmaps
// Time Complexity: O(n)
// Space Complexity: O(2n) ~ O(n) {creating 2 hashmaps of size n}

#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
  bool isAnagram(std::string s, std::string t) {
    std::unordered_map<char, int> map_a;
    std::unordered_map<char, int> map_b;
    auto size = s.size();
    if (size == t.size()) {
      for (int i = 0; i < size; i++) {
        ++map_a[s[i]];
        ++map_b[t[i]];
      }
      if (map_a == map_b) {
        return true;
      }
    }
    return false;
  }
} solution;

int main() {
  std::string s = std::string{"racecar"};
  std::string t = std::string{"carrace"};
  std::cout << solution.isAnagram(s, t);
  return 0;
}
