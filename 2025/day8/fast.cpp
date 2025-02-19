#include <iostream>
#include <algorithm>

using namespace std;

class Solution{
    public:
        //unsigned int Fib(unsigned int n);
        unsigned int Fib(unsigned int n) {
            if (n==0){
                return 0;
            }else if (n<3) {
                return 1;
            }
        return Fib(n - 1) +Fib(n - 2);
        }
};

int main() {
    unsigned int n;
    Solution sol;
    cout << "Wert für N? " << endl;
    cout << "N= ";
    cin >> n;
    cout << "Fib(" << n << ")" << sol.Fib(n) << endl;
}