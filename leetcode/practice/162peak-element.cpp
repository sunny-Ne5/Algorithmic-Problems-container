/*
@author: Sunny Tiwari
date:12 November 2020 (Thursday)
time:00:47
Problem: https://leetcode.com/problems/find-peak-element/
*/


class Solution {
public:
	int findPeakElement(vector<int>& nums) {

		//logarithmic time complexity
		// two scenarios possible at index i
		// either (increasing , decreasing) or i is the answer


		if (nums.size() == 1)
			return 0;
		if (nums[0] > nums[1])
			return 0;
		if (nums.back() > nums[nums.size() - 2])
			return nums.size() - 1;

		int start = 1, end = nums.size() - 2	;

		while (start <= end)
		{
			int mid = (start + end) / 2;
			if (nums[mid - 1]<nums[mid] and nums[mid]>nums[mid + 1])
				return mid;

			if (nums[mid - 1] < nums[mid])
				start = mid + 1;
			else
				end = mid - 1;
		}
		return 0;


	}
};
