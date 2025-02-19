#include <iostream>
#include <list>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        vector<int> removeduplicates(const vector<int>& lst) {
            unordered_set<int> unique_set(lst.begin(), lst.end());
            return vector<int>(unique_set.begin(), unique_set.end());
        }
};

int main() {
    Solution sol;
    vector<int> result = sol.removeduplicates({1,1,2,2,3,3,4,4,5,5,6,6});

    for (int num : result) {
        cout << num << endl;
    }
    return 0;
}