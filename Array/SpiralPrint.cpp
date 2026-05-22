#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int top = 0;
    int bottom = nRows - 1;

    int left = 0;
    int right = nCols - 1;

    while(top <= bottom && left <= right) {

        // Top row
        for(int i = left; i <= right; i++) {

            cout << input[top][i] << " ";
        }

        top++;

        // Right column
        for(int i = top; i <= bottom; i++) {

            cout << input[i][right] << " ";
        }

        right--;

        // Bottom row
        if(top <= bottom) {

            for(int i = right; i >= left; i--) {

                cout << input[bottom][i] << " ";
            }

            bottom--;
        }

        // Left column
        if(left <= right) {

            for(int i = bottom; i >= top; i--) {

                cout << input[i][left] << " ";
            }

            left++;
        }
    }
}