class Solution:
    def main(self, inp):
        if inp[::-1] == inp: return True
        else: return False

sol = Solution()

print(sol.main("lol"))
