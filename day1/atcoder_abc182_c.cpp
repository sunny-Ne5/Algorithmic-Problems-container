/*
@author : Sunny Tiwari
Date : 08/11/2020
Problem Link: https://atcoder.jp/contests/abc182/tasks/abc182_c
Category: Dynamic Programming 
*/












#include                            <iostream>
#include                            <list>
#include                            <stdio.h>
#include                            <math.h>
#include                            <string.h>
#include                            <time.h>
#include                            <stdlib.h>
#include                            <string>
#include                            <bitset>
#include                            <vector>
#include                            <set>
#include                            <map>
#include                            <queue>
#include                            <algorithm>
#include                            <sstream>
#include                            <stack>
#include                            <iomanip>
#include                            <numeric>
#include                            <unordered_map>
#include                            <unordered_set>
using namespace                     std;
#define                             int long long int
#define                             MOD 1000000007



void approach1() //================> TC : O(N^2) where N is the length of the string s , SC: O(N^2)
{

    string s;
    cin >> s;
    int n = s.length(), ans = 0;
    vector<int> arr;
    int sum = 0;
    for (auto it : s)
    {
        int x = (it - '0');
        arr.push_back(x);
        sum += x;
    }
    /*
    dp[index][sum]==>Maximum number of elements required to make 'sum' till 'index'.
    Base Case:
    dp[1....n][0]=0 , zero coins required to make sum zero
    */

    vector<vector<int> > dp(n + 1, vector<int>(sum + 1, -1e18));
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {

            dp[i][j] = dp[i - 1][j];//excluding the current element
            if (j - arr[i - 1] >= 0)
                dp[i][j] = max(dp[i][j], 1 + dp[i - 1][j - arr[i - 1]]);//including the current element

            if (j % 3 == 0)
            {
                ans = max(ans, dp[i][j]);
            }
        }
    }
    if (ans == 0) {
        cout << -1;
    }
    else
        cout << n - ans;

}


void approach2()//================> TC : O(N) where N is the length of the string s , SC: O(N)
{
    string s;
    cin >> s;
    int n = s.length(), ans = 0;
    vector<int> arr;
    int sum = 0;
    for (auto it : s)
    {
        int x = (it - '0');
        arr.push_back(x);
        sum += x;
    }
    vector<vector<int> > dp(n + 1, vector<int>(3, n));


    //dp[idx][rem]=========> Minimum number of elements deleted to get remainder 'rem' till index 'idx'  



    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dp[i][j] = min(1 + dp[i - 1][j], dp[i - 1][(j - arr[i - 1] % 3 + 3) % 3]);
        }
    }
    if (dp[n][0] >= n)
        dp[n][0] = -1;
    cout << dp[n][0];


}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;// cin >> t;
    for (int test = 1; test <= t; test++)
    {


        //approach1();
        // approach2();
    }
    return 0;
}