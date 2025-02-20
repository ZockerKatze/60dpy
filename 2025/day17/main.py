import math
class Solution:
    def lcm(x,y):
        return abs(x*y) // math.gcd(x,y)
sol = Solution ; print(sol.lcm(12,18))