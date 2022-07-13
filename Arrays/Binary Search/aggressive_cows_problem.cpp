#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool possibleSol(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i = 0; i<stalls.size(); i++){
        if(abs(lastPos - stalls[i]) >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
};

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int max = stalls[stalls.size()-1];
    int e = max;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
        if(possibleSol(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        
        mid = s + (e-s)/2;
    }
    return ans;
};

int main(){
    vector<int> stalls{4,2,1,3,6};
    int k = 2;
    cout<<aggressiveCows(stalls, k)<<endl;
    return 0;   
}