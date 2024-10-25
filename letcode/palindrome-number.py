class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        j = len(s) - 1
        for i in range(int(len(s)/2)):
            if(s[i] != s[j]):
                return False 
            j-=1
        return True