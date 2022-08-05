#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

bool possibleSol(vector<int> &trees, int n, int m, long long int mid){
    long long int sum = 0;
    
    for (int i = 0; i < n; i++)
    {   
        long long int cut = mid-trees[i];
        if(cut<0){
            sum+=abs(cut);
        }

        if(sum>=m){
            return true;
        }
    }

    return false;
    
}; 


long long int getMaxHeight(vector<int> &trees, int n, int m){
    long long int s = 0;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=trees[i];
    }
    long long int e = sum;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e){

        if(possibleSol(trees, n, m, mid)){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}


int main(){
    vector<int> trees;
    int n;
    int m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
    	int temp;
    	cin>>temp;
    	trees.push_back(temp);
    	
    }
    cout<<getMaxHeight(trees, n, m)<<endl;
}