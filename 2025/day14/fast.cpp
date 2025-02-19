#include <cmath>  
#include <iostream>

class Solution {
public:
    bool perfectsquare(int n) {
        if (n <= 0) return false;
        double square = std::sqrt(n); 
        return square == static_cast<int>(square); 
    }
};

int main() {
    Solution sol;
    std::cout << std::boolalpha << sol.perfectsquare(1) << std::endl; 
    return 0;
}
