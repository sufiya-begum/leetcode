class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        s=0
        k=x
        while(x>0):
            r=x%10
            s+=r
            x=x//10
        if(k%s == 0):
            return(s)
        else:
            return(-1)
        
            
