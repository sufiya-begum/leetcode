class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        for n in nums:
            index = abs(n) -1
            if nums[index] > 0:
                nums[index] = -nums[index]
        return[i+1 for i in range(len(nums)) if nums[i] >0]

    

        

        