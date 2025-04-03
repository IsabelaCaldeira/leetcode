from typing import List

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        temp = 0
        new = []
        for i in range(0, len(nums)):
            new.append(nums[i] + temp)
            temp += nums[i]
        return new