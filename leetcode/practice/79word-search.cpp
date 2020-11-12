/*
@author: Sunny Tiwari
date: 11 November 2020 (Wednesday)
time: 21:21
Problem: https://leetcode.com/problems/word-search/
*/



class Solution {
public:

	bool check(vector<vector<char> >&board, int n, int m , int x, int y, int idx, string word, vector<vector<bool> >&vis)
	{
		if (idx == word.length())
			return true;
		if (x<0 or x >= n or y<0 or y >= m or board[x][y] != word[idx] or vis[x][y])
			return false;

		vis[x][y] = true;

		bool f =        check(board, n, m, x, y + 1, idx + 1, word, vis)
		                or check(board, n, m, x + 1, y, idx + 1, word, vis)
		                or check(board, n, m, x - 1, y, idx + 1, word, vis)
		                or check(board, n, m, x , y - 1, idx + 1, word, vis);

		vis[x][y] = false;
		return f;

	}
	bool exist(vector<vector<char>>& board, string word) {
		int n = board.size(), m = board.front().size();
		vector<vector<bool> > vis(n, vector<bool>(m, false));
		bool f = false;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				f = f or check(board, n, m, i, j, 0, word, vis);
				if (f) {
					return true;
				}
			}
		}
		return false;


	}
};
