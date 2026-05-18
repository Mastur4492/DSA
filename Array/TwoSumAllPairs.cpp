#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> twoSum(vector<int>& nums, int target, int n)
{
    vector<pair<int,int>> ans;

    sort(nums.begin(), nums.end());

    int left = 0;

    int right = n - 1;

    while(left < right)
    {
        int sum = nums[left] + nums[right];

        if(sum == target)
        {
            ans.push_back({nums[left], nums[right]});

            left++;

            right--;
        }
        else if(sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    if(ans.size() == 0)
    {
        ans.push_back({-1,-1});
    }

    return ans;
}