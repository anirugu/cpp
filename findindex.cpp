#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vals{11, 23, 213, 334};
    auto it = find(vals.begin(), vals.end(), 21113);
    int index = it - vals.begin();
    cout << index << "This is testing" << endl;
}