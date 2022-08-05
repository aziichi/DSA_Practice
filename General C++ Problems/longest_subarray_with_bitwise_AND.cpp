#include <iostream>
#include <vector>
using namespace std;

vector<int> bitwiseAnd(int n, int q, vector<int> arr, vector<int> queries)
{
    vector<int> ans;
    for(int i=1; i<n; i++){
        arr[i] = arr[i]&arr[i-1];    
     }
       
    int ind=0;
    while(q--){
        int max=0;
        for(int i=0; i<n; i++){
            if(arr[i]>=queries[ind]){
                max = i+1;
            }
        }
        ans.push_back(max);
        ind++;
    }
    return ans;
    
}