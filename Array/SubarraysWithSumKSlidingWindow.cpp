#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {

    vector<vector<int>> ans;

    int left = 0;

    long long sum = 0;

    for(int right = 0; right < a.size(); right++) {

        sum += a[right];

        while(sum > k) {

            sum -= a[left];

            left++;
        }

        if(sum == k) {

            vector<int> temp;

            for(int i = left; i <= right; i++) {

                temp.push_back(a[i]);
            }

            ans.push_back(temp);
        }
    }

    return ans;
}