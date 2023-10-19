#include <bits/stdc++>
using namespace std;

/*
48. Rotate Image:

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation.

Solution 1:
Take the transpose of the matrix and after that reverse each row.

Time Complexity -> O(n^2)
Space Complexity -> O(1)

*/


/* -------- CODE --------*/

// Solution 1 Implementation:
void transpose(vector<vector<int>>& matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=i; j<matrix[0].size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void rotate(vector<vector<int>>& matrix) {
    transpose(matrix);
    for(int i=0; i<matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}