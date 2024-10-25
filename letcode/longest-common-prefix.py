class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        minl = float('inf')
        for s in strs:
            if len(s) < minl:
                minl = len(s)
        for i in range(minl):
            for s in strs:
                if s[i] != strs[0][i]:
                    return s[:i] 
        return strs[0][:minl]
                

