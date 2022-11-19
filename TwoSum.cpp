// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int> &, int);

int main()
{
	vector<int> input = {3, 2, 4};
	vector<int> result = twoSum(input, 6);
}

vector<int> twoSum(vector<int> &nums, int target)
{

	for (int i = 0; i < nums.size(); i++)
	{
		auto remainder = target - nums[i];
		cout << remainder << endl;
		auto result = find(nums.begin(), nums.end(), remainder);
		if (result != nums.end())
		{
			auto index = result - nums.begin();
		}
	}

	return vector<int>{};
}