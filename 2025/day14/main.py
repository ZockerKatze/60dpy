class Solution:
    def perfectsquare(self,n):
        if n <= 0: return False
        square = (n ** 0.5)
        return square * square == n
sol = Solution()
print(sol.perfectsquare(1))