class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        result = ""
        i = 0
        while i < len(word1) and i < len(word2):
            result += word1[i] + word2[i]
            i+=1
        
        for j in range(i, len(word1) if i < len(word1) else len(word2)):
            result += word1[j] if i < len(word1) else word2[j]
            
        
        return result