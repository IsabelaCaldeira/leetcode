class Solution:
    def numberOfSteps(self, num: int) -> int:
        res = 0
        while(num!=0):
            if(num%2==0):
                num = num/2
            else:
                num = num - 1
            res += 1
        return res
            