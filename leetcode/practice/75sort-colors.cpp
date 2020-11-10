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

		int start = 0, end = n - 1;
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 0)
			{
				swap(nums[i], nums[start]);
				start++;
			}
		}
		int start = 0, end = n - 1;
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 2)
			{
				swap(nums[i], nums[start]);
				end--;
			}
		}

	}
};