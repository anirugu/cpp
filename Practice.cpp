#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vect{11, 22, 332, 24};
    auto back = vect.back();
    auto front = vect.front();
    cout << vect.back() << endl;
}