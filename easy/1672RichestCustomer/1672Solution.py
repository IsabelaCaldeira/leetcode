from typing import List
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res = 0
        for customer in range(0, len(accounts)): 
            sumCompare = sum(accounts[customer])
            if(sumCompare > res):
                res = sumCompare
        return res
