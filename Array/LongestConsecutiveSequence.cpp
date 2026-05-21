#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>& a) {

    int n = a.size();

    if(n == 0)
        return 0;

    int longest = 1;

    unordered_set<int> st;

    // Insert all elements into set
    for(int i = 0; i < n; i++) {

        st.insert(a[i]);
    }

    // Traverse set
    for(auto it : st) {

        // Check starting element
        if(st.find(it - 1) == st.end()) {

            int cnt = 1;

            int x = it;

            // Count sequence
            while(st.find(x + 1) != st.end()) {

                x = x + 1;

                cnt = cnt + 1;
            }

            longest = max(longest, cnt);
        }
    }

    return longest;
}