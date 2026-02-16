class Solution:
    def findDelayedArrivalTime(self, arrivalTime: int, delayedTime: int) -> int:
        k=arrivalTime+delayedTime
        if(k<24):
            return k
        else:
            return k%24
    