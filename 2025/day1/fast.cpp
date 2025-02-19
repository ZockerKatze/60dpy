#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
    public:
        int returnsum(vector<int> n={}) {
            return accumulate(n.begin(),n.end(),0);
        };
};

int main() {
    Solution sol;
    cout << sol.returnsum({5,5}) << endl;
    return 0;
};
