#include <bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector<int> a, int k) {
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++; // {0,1}

    int cnt = 0;

    for (int i = 0; i < a.size(); i++) {
        xr = xr ^ a[i];

        // x
        int x = xr ^ k;
        cnt += mpp[x];

        mpp[xr]++;
    }

    return cnt;
}