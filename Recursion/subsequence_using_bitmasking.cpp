#include <bits/stdc++.h>
using namespace std;

vector<string> subsequences(string str){
	vector <string> ans;
	
    for(int i=0; i<pow(2,str.size()); i++){
        string subset = "";
        for(int j=0; j<str.size(); j++){
            if(i & (1<<j)){
                subset+=str[j];
            }
        }
        
        if(subset.size()>0)
            ans.push_back(subset);
    }
    return ans;
}
