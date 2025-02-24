#include <iostream>

using namespace std;

class Solution
{
    public:
    bool check(int x)
    {
        return x % 3 == 0 || x % 5 == 0;
    }
};

int main()
{
    Solution sol;
    cout << sol.check(1) << endl;
}