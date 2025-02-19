#include <iostream>

using namespace std;

class Solution {
    public:
    int fakultität(int n) {
        if (n == 1 || n == 0) {
            return true;
        } else {
            Solution sol;
            return n* sol.fakultität(n-1);
        }
    }
};

int main() {
    Solution sol;
    cout << sol.fakultität(5)<<endl;
    return 0;
}