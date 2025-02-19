#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reversestring(string str) { 
        reverse(str.begin(), str.end());  
        return str; 
    }
};

int main() {
    Solution sol;
    string input = "reverseme!";  
    string output = sol.reversestring(input);  
    cout << "Reversed string: " << output << endl; 
    return 0;
}
