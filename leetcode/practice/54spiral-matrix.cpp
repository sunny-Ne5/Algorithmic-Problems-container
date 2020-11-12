/*
@author: Sunny Tiwari
date:12 November 2020 (Thursday)
time:01:15
Problem: https://leetcode.com/problems/spiral-matrix/
*/



class Solution {
public:

	void boundary(vector<vector<int> >&matrix, int x, int y, int n, int m, vector<int> &ans)
	{
		
		for (int i = y; i <= m; i++)
			ans.push_back(matrix[x][i]);
		for (int i = x + 1; i <= n; i++)
			ans.push_back(matrix[i][y]);
		for (int i = m - 1; i >= y; i--)
			ans.push_back(matrix[x][i]);
		for (int i = n - 1; i >= x + 1; i--)
			ans.push_back(matrix[i][y]);
		return ans;
	}
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int>ans;
		int n = matrix.size() - 1, m = matrix[0].size() - 1;

		for (int i = 0; i < min(n, m); i++)
		{
			auto t = boundary(matrix, i, i, n, m, ans);
			n -= 2;
			m -= 2;
		}
		return ans;
	}
};