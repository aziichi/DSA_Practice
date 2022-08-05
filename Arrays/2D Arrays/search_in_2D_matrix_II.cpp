#include <bits/stdc++.h>
using namespace std;

// Approach: Start from the very last element in the first row and keep reducing the search space.

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex<row && colIndex>=0){
            int element = matrix[rowIndex][colIndex];
            
            if(element==target){
                return 1;
            }
            else if(element<target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        
        return 0;
}