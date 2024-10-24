class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # profit = 0
        # for i in range(len(prices)):
        #     x = max(prices) - prices[0]
        #     if x > profit :
        #         profit = x
        #     prices.pop(0)

        # return profit
        minprice = prices[0]
        profit=0
        for price in prices:
            if minprice > price:
                minprice=price
            if price - minprice > profit:
                profit = price - minprice
        return profit 