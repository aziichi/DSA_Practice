void solve(vector<string>& ans, string output, int index, string str)
{
    if(index>=str.size()){
        if(output.size()>0)
            ans.push_back(output);
        return;
    }
    
    //Exclude
    solve(ans, output, index+1, str);
    
    //Include
    output += str[index];
    solve(ans, output, index+1, str);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    
    solve(ans, output, 0, str);
    return ans;
	
}