class Solution:
    def countOdds(self, low: int, high: int) -> int:
        k=high-low
        n=k//2
        if(high%2 == 0 and low %2 == 0):
            return n
        else:
            return n+1
   

