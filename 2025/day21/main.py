class Solution:
    def findindex(self, liste, place):
        try:
            return liste.index(place) + 1 # 1 is 2 in context
        except ValueError:
            return -1
mylist = [1,2,3,4,5]
sol = Solution() ; print(sol.findindex(mylist, 2))