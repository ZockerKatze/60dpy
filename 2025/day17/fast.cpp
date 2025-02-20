#include <iostream>
#include <numeric>
#include <cstdlib>

using namespace std;

class Solution {
    public:
    int lcm(int x, int y) {
        return abs(x*y) / gcd(x,y);
    }
};

int main() {
    Solution sol;
    cout << sol.lcm(12,18) << endl;
    return 0;
}