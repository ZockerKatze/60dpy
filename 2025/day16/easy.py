class Solution:
    def gcd(self,x,y):
        if y == 0: return x
        return self.gcd(y,x%y)
sol = Solution() ; print(sol.gcd(5,10))