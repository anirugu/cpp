#include <iostream>
#include <vector>

using namespace std;

vector<int> lexicalOrder(int n)
{
    vector<int> nums;
    for (int i = 0; i < 10; i++)
    {
        if (i > n)
        {
            break;
        }
        nums.push_back(i);
        // DFS(nums, n);
    }
    return nums;
};

void DFS(vector<int> &nums, int i, int max)
{
    auto last = &nums;
    last->push_back(555);
    auto i = &nums.end();
}

int main()
{
    cout << "Hello World!\n";
    lexicalOrder(13);
}