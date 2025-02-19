class Solution:
    def isanagram(self,str1:str,str2:str) -> bool:
        return sorted(str1) == sorted(str2)
sol = Solution() ; print(sol.isanagram("silent","listen"))
