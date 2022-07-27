#include <bits/stdc++.h>
using namespace std;

// count the elements lesser than or equal to the given element;
int countElements(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    
    int mid = start + (end-start)/2; // (start+end)/2
    
    while (start<=end)
    {
        if(arr[mid]<=key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return start;
    
};

int kthSmallest(int mat[INT_MAX][INT_MAX], int n, int k)
{
   int min = mat[0][0], max = mat[n-1][n-1];
      
      int mid = min + (max-min)/2; 
      
      while(min<max){
          int mid_pos = 0;
          
          for(int i=0; i<n; i++){ // Position of the middle element by counting the elements lesser or equal to it
              mid_pos += countElements(mat[i], n, mid);
          }
          
          // Keep bringing min and max near the median position until they are equal i.e only one element left.
          if(mid_pos<k){
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
