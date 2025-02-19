#include <iostream>
#include <unordered_set>

class Solution {
public:
    int vocal(const std::string& inp) {
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 
                                           'A', 'E', 'I', 'O', 'U'};
        int count = 0;
        for (char ch : inp) {
            if (vowels.find(ch) != vowels.end()) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    std::cout << sol.vocal("Ich Ich Ich Ich") << std::endl; 
    return 0;
}
