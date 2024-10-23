class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j = 0
        tmp =""
        for i in range(len(t)):
            if j == len(s):
                break
            flag = False
            if (t[i] == s[j]):
                flag = True
                tmp += t[i]
            if(flag):
                j+=1

        if tmp == s:
            return True
        else :
            return False
            