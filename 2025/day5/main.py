class Solution:
    def vocal(self, inp):
        vowels = {
            "a",
            "e",
            "i",
            "o",
            "u",
            "A",
            "E",
            "I",
            "O",
            "U"
        }
        return sum(1 for char in inp if char in vowels)

sol = Solution()
print(sol.vocal("I")) 