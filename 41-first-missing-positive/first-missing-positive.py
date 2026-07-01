class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        m = max(nums)
        if(m<1):
            return 1
        seen = set(nums)
        for i in range(1,m+1):
            if i not in seen:
                return i
        return m+1
    