#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
    int findmax(vector<int> n) {
        double maxi = *max_element(n.begin(), n.end());
        return maxi;
    }
};

int main() {
    Solution sol;
    cout << sol.findmax({1,2,3,4,5,6,7,8}) << endl;
    return 0;
}