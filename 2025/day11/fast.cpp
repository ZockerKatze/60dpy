#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Solution {
    public:
        int length(const string& sent) {
            istringstream iss(sent);
            string word;
            int count = 0;
            while (iss >> word)
            {
                count++;
            }
            return count;
        }
};

int main() {
    Solution sol;
    cout << sol.length("Ich hasse c++") << endl;
    return 0;
};