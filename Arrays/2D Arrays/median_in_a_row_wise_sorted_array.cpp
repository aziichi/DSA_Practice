#include <bits/stdc++.h>
using namespace std;


int median(vector<vector<int>> &matrix, int r, int c){
      int min = matrix[0][0], max = matrix[0][c-1];
      
      for(int i=0; i<r; i++){
          if(matrix[i][0]<min){
              min = matrix[i][0];
          }
          if(matrix[i][c-1]>max){
              max = matrix[i][c-1];
          }
      }
      
      int med_pos = ((r*c)+1)/2; // The position where the median is supoosed to be.
      
      int mid = min + (max-min)/2; 
      
      while(min<max){
          int mid_pos = 0;
          
          for(int i=0; i<r; i++){ // Position of the middle element by counting the elements lesser or equal to it
              mid_pos += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
          }
          
          // Keep bringing min and max near the median position until they are equal i.e only one element left.
          if(mid_pos<med_pos){
              min = mid+1;
          }
          else{
              // Do not do mid + 1 cuz mid might possibly be the median.
              // Doing the above will make min and max cross each other.
              max = mid;
          }
          
          mid = min + (max-min)/2;
          
      }
      
      // Return either min and max;
      return max;
}