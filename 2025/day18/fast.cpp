#include <iostream>

using namespace std;

class Solution {
    public:
    int iseven(int x) {
        return x%2 == 0;
    }
};

int main() {
    Solution sol;
    cout << sol.iseven(1) << endl;
    return 0;
}


