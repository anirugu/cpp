#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        for (auto x : nums)
        {
            nums.push_back(x);
        }
        return nums;
    }
};

int main()
{
    std::cout << "Hello World!\n";
    vector<int> nums{1, 2, 3, 4};
    Solution sol;

    sol.getConcatenation(nums);
}
