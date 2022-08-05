#include <bits/stdc++.h>
using namespace std;

void reverseRow(vector<vector<int>>& matrix, int rows, int cols){        
        for(int i=0; i<rows; i++){
            int l = 0;
            int r = cols-1;
            
            while(l<r){
                swap(matrix[i][l++], matrix[i][r--]);
            }
        }
}


void transpose(vector<vector<int>>& matrix, int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=i+1; j<cols; j++){
            swap(matrix[i][j], matrix[j][i]);
            
        }
    }
}

void rotate(vector<vector<int>>& matrix) {        
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    // Transpose of matrix
    transpose(matrix, rows, cols);
    
    // Reverse each row
    reverseRow(matrix, rows, cols);
    
}


// Alternative method
 void rotate(vector<vector<int>>& matrix) {        
       int l=0, r = matrix.size()-1;
        
        while(l<r){
            for(int i=0; i<r-l; i++){
                int top = l, bottom = r;
                
                int temp = matrix[top][l+i];
                
                matrix[top][l+i] = matrix[bottom-i][l];
                
                matrix[bottom-i][l] = matrix[bottom][r-i];
                
                matrix[bottom][r-i] = matrix[top+i][r];
                
                matrix[top+i][r] = temp;
                
            }
            l++;
            r--;
        }
        
}