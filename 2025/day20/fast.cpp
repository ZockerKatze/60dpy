#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Sort
{
    public:
    void SortedVector(vector<int> &numbers)
    {
        return sort(numbers.begin(), numbers.end());
    }
};

int main() 
{
    vector<int> numbers = {9,6,3,8,5,2,7,4,1};
    Sort sorter;
    sorter.SortedVector(numbers);

    for (int num : numbers)
    {
        cout << "\n" << num << " ";
    }
    return 0;
}

