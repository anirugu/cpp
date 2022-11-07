// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>&, int);

int main()
{
	vector<int> input = { 3, 2, 4 };
	vector<int> result = twoSum(input, 6);
}

vector<int> twoSum(vector<int>& nums, int target)
{
	
	for (int i = 0; i < nums.size(); i++) {
		auto remainder = target - nums[i];
		cout << remainder << endl;
		auto result = find(nums.begin(), nums.end(), remainder);
		if (result != nums.end())
		{
			auto index = result - nums.begin();
		}
	}

	/*for (int i = 0; i < nums.size(); i++)
	{
		int c = nums[i];
		for (int j = i + 1; j < nums.size(); j++)
		{
			int sc = nums[j];
			if (nums[i] + nums[j] == target)
			{
				vector<int> result = {i, j};
				return result;
			}
		}
	}*/
	return vector<int>{};
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
