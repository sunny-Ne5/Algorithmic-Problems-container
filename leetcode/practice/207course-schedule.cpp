/*
@author: Sunny Tiwari
date: 10 November 2020 (Tuesday)
time: 22:51
Problem: https://leetcode.com/problems/course-schedule/
*/




bool cycle = false;
void isCycle(vector<vector<int> >&adj, vector<int>&color, int node)
{

	color[node] = 1;

	for (int i = 0; i < adj[node].size(); i++)
	{
		int next = adj[node][i];
		if (color[next] == 1) //cycle found
		{
			cycle = true;
			return ;
		}
		if (color[next] == 0)
			isCycle(adj, color, next);
	}
	color[node] = 2;
}

class Solution {
public:
	bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
		vector<int> color(numCourses);
		vector<int> inDegree(numCourses), outDegree(numCourses);
		vector<vector<int> >adj(numCourses);
		for (auto it : prerequisites)
		{
			int u = it[0], v = it[1];
			inDegree[v]++;
			outDegree[u]++;
			adj[u].push_back(v);
		}

		cycle = false;
		for (int i = 0; i < numCourses; i++)
		{
			if (inDegree[i] == 0)
			{
				isCycle(adj, color, i);
			}
		}

		for (int i = 0; i < numCourses; i++)
		{
			if (color[i] == 0)
				return false;
		}
		return !cycle;
	}
};
