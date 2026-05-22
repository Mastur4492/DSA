#include <bits/stdc++.h>
using namespace std;

vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k) {

    k = k % m;

    for(int i = 0; i < n; i++) {

        reverse(mat[i].begin(), mat[i].end());

        reverse(mat[i].begin(), mat[i].begin() + k);

        reverse(mat[i].begin() + k, mat[i].end());
    }

    vector<int> ans;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            ans.push_back(mat[i][j]);
        }
    }

    return ans;
}