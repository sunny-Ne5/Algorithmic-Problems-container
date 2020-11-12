/*
@author: Sunny Tiwari
date:11 November 2020 (Wednesday)
time:23:29
Problem:https://leetcode.com/problems/rotate-array/
*/


//rotate the array to the right by k steps


//Approach 1

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		if (nums.empty())
			return ;
		k = k % (nums.size());
		vector<int> ans;
		for (int i = nums.size() - k; i < nums.size(); i++)
		{
			ans.push_back(nums[i]);
		}
		for (int i = 0; i < nums.size() - k; i++)
			ans.push_back(nums[i]);
		nums = ans;
	}
};


//Approach 2


class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		if (nums.empty())
			return ;

		k = k % (nums.size());
		reverse(begin(nums), end(nums));
		reverse(begin(nums), begin(nums) + k);
		reverse(begin(nums) + k , end(nums));
	}
};
