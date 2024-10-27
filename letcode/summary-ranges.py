class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        result = []
        if not nums: return []
        init=nums[0]
        k = nums[0]
        for i in range(1,len(nums)):
            if k+1 == nums[i]:
                k = nums[i]
            else : 
                if init == k:
                    result.append(str(init))
                else:
                    result.append(str(init)+"->"+str(k))
                init = nums[i]
                k = nums[i]
        if init == k:
            result.append(str(init))
        else:
            result.append(str(init)+"->"+str(k))
        return result