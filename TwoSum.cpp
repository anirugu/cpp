#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target);

int main()
{
    vector<int> vect{1, 2, 3, 4};
    twoSum(vect, 5);
}

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        int remainder = nums[i] - target;
       // auto index = find(nums.begin(), nums.end(), remainder);
    }
    return result;
}