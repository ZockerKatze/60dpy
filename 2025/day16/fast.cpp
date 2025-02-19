#include <iostream>
using namespace std;

class Solution {
    public:
        int gcd(int x,int y) {
            if (y==0) return x;
            return gcd(y, x%y);
        }
};

int main() {
    Solution sol;
    cout << sol.gcd(5,10) << endl;
    return 0;
}