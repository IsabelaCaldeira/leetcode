from typing import List
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res = 0
        for customer in range(0, len(accounts)): 
            sum = 0
            for wealth in range(0,len(accounts[customer])):
                sum += accounts[customer][wealth]
            if(sum > res):
                res = sum
        return res
