class Solution:
    def isanagramm(self,str1: str, str2: str) -> bool:
        return sorted(str1) == sorted(str2)

sol = Solution()
print(sol.isanagramm("silent","listen"))

