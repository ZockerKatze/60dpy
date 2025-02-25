#include <iostream>

using namespace std;

class Solution
{
    public:
    bool check(int x)
    {
        if(x%3==0 && x%5==0) {
            return true;
        } else {
            return false;
        }
    }
};

int main()
{
    Solution sol;
    cout << boolalpha << sol.check(15) << endl;
    return 0;
}