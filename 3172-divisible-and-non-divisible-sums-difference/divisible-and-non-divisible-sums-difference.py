class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        l=0
        k=0
        for i in range(1,n+1):
            if(i%m == 0):
                l+=i
            else:
                k+=i
        return k-l
