class Solution:
    def romanToInt(self, s: str) -> int:
        symbols = ['M','D','C','L','X','V','I']
        values = [1000,500,100,50,10,5,1]
        keeper = 0
        result = 0
        for i in reversed(s):
            for j in range(len(symbols)):
                if(i == symbols[j]):
                    if(values[j]>=keeper):
                        result += values[j]
                    else:
                        result -= values[j]
                    keeper = values[j]
                    break

        return result