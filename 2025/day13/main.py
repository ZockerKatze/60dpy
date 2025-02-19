class Solution:
    def removeduplicates(self, lst=[]):
        return list(set(lst))
    
sol = Solution()
print(sol.removeduplicates([1,1,2,2,3,3,4,4]))