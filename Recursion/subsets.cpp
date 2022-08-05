class Solution {
private:
    void solve(vector<vector<int>>& ans, vector<int> output, int index, vector<int> nums)
    {
        start:
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        
        // Exclude 
        solve(ans, output, index+1, nums);
        
        // Include 
        output.push_back(nums[index]);
        
	/* Can also do this -> solve(ans, output, index+1, nums);
	   instead of below code. The below method is called tail call elimination */
        index+=1;
        goto start;
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        
        solve(ans, output, 0, nums);
        
        return ans;
    }
};