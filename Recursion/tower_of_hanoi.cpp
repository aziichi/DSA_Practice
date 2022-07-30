#include <bits/stdc++.h>
using namespace std;

void moveDisks(int n, int from, int aux, int to, vector<vector<int>>& res){
    if(n==1){
        res.push_back({from,to});
        return;
    }
    moveDisks(n-1, from, to, aux, res);
    res.push_back({from,to});
    moveDisks(n-1, aux, from, to, res);
}

vector<vector<int>> towerOfHanoi(int n)
{    
    vector<vector<int>> res;
    
    moveDisks(n, 1, 2, 3, res);
    return res;
}