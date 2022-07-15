#include <iostream>
#include <vector>
using namespace std;
    
void rotate(vector<int>& nums, int k) {
//         if(nums.size()<=1 || k==0 || k==nums.size()){
//             return;
//         }      
//         k = k%nums.size();
//         int i=0;
//         int j=nums.size()-1-k;
//         while(i<=j){
//             swap(nums[i++], nums[j--]);
//         }
        
//         i=nums.size()-k;
//         j=nums.size()-1;
//         while(i<=j){
//             swap(nums[i++], nums[j--]);
//         }
        
//         i=0;
//         j=nums.size()-1;
//         while(i<=j){
//             swap(nums[i++], nums[j--]);
//         }
    
    vector<int> temp(nums.size());
    
    for(int i=nums.size()-1; i>=0; i--){
        temp[(i+k)%nums.size()] = nums[i];
    }
    
    nums = temp;
}