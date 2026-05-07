class Solution:
    def maximum69Number (self, num: int) -> int:
        num_str = str(num)
        max=num_str.replace('6','9',1)
        return int(max)
        