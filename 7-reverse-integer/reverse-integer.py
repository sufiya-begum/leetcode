class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1
        x *= sign
        reverse = 0
        while x != 0:
            reverse = reverse * 10 + x % 10
            x //= 10
        reverse *= sign
        return reverse if (-2**31) <= reverse <= (2**31)-1 else 0
        