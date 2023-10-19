#include <bits/stdc++>
using namespace std;

/*
54. Spiral Matrix:

Given an m x n matrix, return all elements of the matrix in spiral order.

Solution 1:
Take four pointers from each side of matrix and traverse the top row from left to right side first, 
and increment top pointer after it. Similarly, traverse the right column from top to bottom and
decrement right pointer. Do it for all the sides. Repeat this entire process until left>right and
top>bottom.

Time Complexity -> O(mxn)
Space Complexity -> O(mxn)

*/


/* -------- CODE --------*/

// Solution 1 Implementation:
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int l=0, r=matrix[0].size()-1;
    int t=0, b=matrix.size()-1;
    
    vector<int> ans;
    
    while(l<=r && t<=b){
        for(int i=l; i<=r && (l<=r && t<=b); i++){
            ans.push_back(matrix[t][i]);
        }
        t++;

        for(int i=t; i<=b && (l<=r && t<=b); i++){
            ans.push_back(matrix[i][r]);
        }
        r--;

        for(int i=r; i>=l && (l<=r && t<=b); i--){
            ans.push_back(matrix[b][i]);
        }
        b--;

        for(int i=b; i>=t && (l<=r && t<=b); i--){
            ans.push_back(matrix[i][l]);
        }
        l++;
    }
    return ans;
}