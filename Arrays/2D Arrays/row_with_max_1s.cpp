#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    int max = 0;
    int idx = -1;
    
    for(int i=0; i<n; i++){
        int firstOccurence = lower_bound(arr[i].begin(), arr[i].end(), 1) - arr[i].begin();
        int count = m - firstOccurence;
        
        if(count>max){
            max = count;
            idx = i;
        }
    }
    
    return idx;
}