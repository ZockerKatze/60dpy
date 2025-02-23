class Solution:
    def findindex(self, liste, place):
        try: return liste.index(place) + 1;
        except ValueError: return -1;
sol = Solution() ; print(sol.findindex([1,2,3,4,5], 2))