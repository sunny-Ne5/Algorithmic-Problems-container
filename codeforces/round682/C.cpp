/*
@author: Sunny Tiwari
time: 20:20
date: 13 November 2020 (Friday)
Problem:
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

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int f;
        if (i % 2 == 0)
            f = 0;
        else
            f = 1;
        for (int j = 0; j < m; j++)
        {
            //0101...
            //1010...
            //0101
            if (j % 2 == 0)
            {
                if (arr[i][j] % 2 == f)
                    continue;
                arr[i][j] += 1;
            }
            else
            {
                if (arr[i][j] % 2 == f ^ 1)
                    continue;
                arr[i][j] += 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
   /* cout << endl;*/
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; cin >> t;
    for (int test = 1; test <= t; test++)
    {

        solve();
    }
    return 0;
}