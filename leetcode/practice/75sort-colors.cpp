/*
@author: Sunny Tiwari
date: 11 November 2020 (Wednesday)
time: 01:03
Problem: https://leetcode.com/problems/sort-colors/
*/


/*

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
*/



class Solution {
public:
	void sortColors(vector<int>& nums) {
		//algorithm
		//arrange all the zeros to the left and two's to the right
		//don't worry about the middle ones

		if (nums.size() <= 1)
			return ;
		int start;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
			{
				start = i;
				while (start - 1 >= 0 and nums[start - 1] != 0)
				{
					swap(nums[start], nums[start - 1]);
					start--;
				}
			}
		}
		for (int i = nums.size() - 1; i >= 0; i--)
		{
			if (nums[i] == 2)
			{
				start = i;

				while (start + 1 < nums.size() and nums[start + 1] != 2)
				{
					swap(nums[start], nums[start + 1]);
					start++;
				}
			}
		}

	}
};