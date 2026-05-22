#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int top = 0;
    int bottom = n - 1;

    int left = 0;
    int right = m - 1;

    while(top < bottom && left < right) {

        int prev = mat[top + 1][left];

        // Top row
        for(int i = left; i <= right; i++) {

            swap(mat[top][i], prev);
        }

        top++;

        // Right column
        for(int i = top; i <= bottom; i++) {

            swap(mat[i][right], prev);
        }

        right--;

        // Bottom row
        for(int i = right; i >= left; i--) {

            swap(mat[bottom][i], prev);
        }

        bottom--;

        // Left column
        for(int i = bottom; i >= top; i--) {

            swap(mat[i][left], prev);
        }

        left++;
    }
}