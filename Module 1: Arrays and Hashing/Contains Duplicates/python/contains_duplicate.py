# Problem: https://leetcode.com/problems/contains-duplicate/

# Time limit exceeded
class Solution:
    def containsDuplicate(self, nums) -> bool:
        flag = False
        index = 1
        for element in nums:
            if flag == False:
                for i in range(index, len(nums)):
                    if element == nums[i]:
                        flag = True
                        break
            else:
                break;
            index = index + 1
        return flag


numbers = [3, 3]
solution = Solution()
print(solution.containsDuplicate(numbers))