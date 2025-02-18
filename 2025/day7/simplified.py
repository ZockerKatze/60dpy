class Solution:
    def checkprime(self,n):
        for i in range(2,n): 
            if (n%i) == 0: return "Keine Primnummer"
            else: return "Primnummer"
sol = Solution(); print(sol.checkprime(3))