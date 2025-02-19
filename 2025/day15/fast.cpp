#include <iostream>
using namespace std;

class Solution {
    public:
        bool istschaltjahr(int n) {
            return (n % 4 == 0 && (n % 100 != 0) || n %400 == 0);
        }
};

int main(){
    Solution sol;
    int year = 2024;
    cout << sol.istschaltjahr(year) << endl;
    return 0;
}