class Solution:
    def istschaltjahr(self,n):
        if n / 4 != 100:
            return "Schaltjahr"
        else:
            return "Kein Schaltjahr"
sol = Solution()
print(sol.istschaltjahr(2028))
## Ist die Jahreszahl durch vier teilbar, aber nicht durch 100, ist es ein Schaltjahr
