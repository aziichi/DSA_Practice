#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int count = 0;
        int total = rows*cols;
        
        // Index of each row and column for printing
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = rows-1;
        int endingCol = cols-1;
        
        while(count<total){
            
            // Starting row
            for(int i=startingCol; count<total && i<=endingCol; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            //Ending column
            for(int i=startingRow; count<total && i<=endingRow; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            //Ending row
            for(int i=endingCol; count<total && i>=startingCol; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            //Starting column
            for(int i=endingRow; count<total && i>=startingRow; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
            
        }
        
        return ans;
}