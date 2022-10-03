// LengthofLastWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isPalindrome(int);
int main()
{
	bool result = isPalindrome(121);
	cout << result;
}

bool isPalindrome(int x) {
	if (x < 0)
		return false;
	int reverse = 0;
	int palindrom = x;
	while (palindrom != 0) {
		int remainder = palindrom % 10;
		reverse = reverse * 10 + remainder;
		palindrom = palindrom / 10;
	}
	if (reverse == x)
		return true;
	return false;
}