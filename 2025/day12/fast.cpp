#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int minof(vector<int> nums) {
            return *min_element(nums.begin(),nums.end());
        };
};


int main() {
    Solution sol;
    cout << sol.minof({1,2,3,4,5,6}) << endl;
    return 0;
}