class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        d = nums[0]
        for i in range(len(nums)):
            if  abs(d) > abs(nums[i]):
                d = nums[i]
        
        for i in range(len(nums)):
            if abs(d) == abs(nums[i]):
                if(d<nums[i]):
                    d = nums[i]
                    
        return d