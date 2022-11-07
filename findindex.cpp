#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vals{1, 2, 3, 4};
    auto it = find(vals.begin(), vals.end(), 5);
    cout << it.base();
}