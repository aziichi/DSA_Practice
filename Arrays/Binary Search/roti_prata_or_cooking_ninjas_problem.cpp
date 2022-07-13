#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &rank, int m, int mid){
    int dish=0, sum = 0;
    for(int i=0; i<rank.size(); i++){
        for(int j=1; j<=m; j++){
            sum+=j*rank[i];
            if(sum<=mid){
                dish++;
            }
            if(dish==m){
                return true;
            }
        }
         sum = 0;   
    }
    return false;
}

int minCookTime(vector<int> &rank, int m)
{
 int max = -1;
 for(int i=0; i<rank.size(); i++){
     if(max<rank[i]){
         max = rank[i];
     }
 }
 int s = 0;
 int e = max * (m*(m+1)/2);
 int mid = s + (e-s)/2;
 int ans = -1;
 while(s<=e){
     if(isPossible(rank, m, mid)){
         ans = mid;
         e = mid - 1;
     }
     else {
         s = mid + 1;
     }
     mid = s + (e-s)/2;
 }
    return ans;
}


int main(){
    vector<int> rank{1,2,3,4};
    int m = 11;
    cout<<minCookTime(rank, m)<<endl;
    return 0;
}