#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    auto common = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        if (find(strs[i].begin(), strs[i].end(), common) != strs[i].end())
        {
        }
    }
}

int main()
{
    vector<string> vect{"flower", "flow", "flight"};
    longestCommonPrefix(vect);
    std::cout << "Hello World!\n";
}
