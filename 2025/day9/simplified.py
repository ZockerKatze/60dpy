class Solution:
    def sortedlist(self, l1=[], l2=[]):
        mlist = [] ; i,j = 0,0
        while i < len(l1) and j < len(l2):
            if l1[i] < l2[j]: mlist.append(l1[i]) ; i += 1
            else: mlist.append(l2[j]) ; j += 1
        while i < len(l1): mlist.append(l1[i]) ; i += 1
        while j < len(l2): mlist.append(l2[j]) ; j += 1
        return mlist
sol = Solution() ; print(sol.sortedlist([1,3,5,7],[2,4,6,8]))