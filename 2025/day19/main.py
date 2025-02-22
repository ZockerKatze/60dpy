import re

regex = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b'

class Solution:
    def check(self, email):
        if(re.fullmatch(regex, email)):
            return True
        else:
            return False
if __name__ == "__main__":
    sol = Solution()
    
    email = "test-test@test.com"
    
    print(sol.check(email))