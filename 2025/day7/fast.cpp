#include <iostream>
using namespace std;

class Solution {
    public:
    bool isprime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true; 
    }
};

int main() {
    int n;
    Solution sol;
    cout << "Gebe eine Nummer ein für isprime" << endl;
    cout << "\n n = "; 
    cin >> n;

    if (sol.isprime(n)) {
        cout << n << " ist eine Primzahl." << endl;
    } else {
        cout << n << " ist keine Primzahl." << endl;
    }

    return 0;
}
