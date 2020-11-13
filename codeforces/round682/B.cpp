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
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    bool f = false;
    for (auto it : mp)
    {
        if (it.second > 1)
            f = true;
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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