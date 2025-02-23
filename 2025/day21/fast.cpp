#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Solution {
public:
    int findindex(int lookval) {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int n = sizeof(arr) / sizeof(arr[0]);

        auto ptr = find(arr, arr + n, lookval);
        int idx = ptr - arr;

        return (idx < n) ? idx : -1; // Return -1 if not found
    }
};

int main() {
    Solution sol;
    int index = sol.findindex(1);
    
    if (index == -1) {
        cout << "No Index for Element" << endl;
    } else {
        cout << index << endl;
    }

    return 0;
}
