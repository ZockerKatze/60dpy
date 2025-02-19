#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
        bool isanagram(string str1, string str2) {
            sort(str1.begin(),str1.end());
            sort(str2.begin(), str2.end());
            return str1 == str2;
    }
};

int main() {
    Solution sol;
    cout << sol.isanagram("silent","listen") << endl;
    return 0;
};