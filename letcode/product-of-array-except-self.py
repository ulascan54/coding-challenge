class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        answer = []
        sumnums = 1
        wzsums=1
        zeroc = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                zeroc+=1
            sumnums *= nums[i]
        if zeroc >= 2 :
            for i in range(len(nums)):
                answer.append(0)
            return answer
        if zeroc == 1:
            for i in range(len(nums)):
                if nums[i] == 0:
                    continue
                zeroc *= nums[i]


        
        for i in range(len(nums)):
            if nums[i] == 0:
                answer.append(zeroc)
                continue
            answer.append(int(sumnums / nums[i]))

        return answer
        