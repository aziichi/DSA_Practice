#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int l = 0, m = 0;
        
        while(m<nums.size()){
            if(nums[m]!=0){
                swap(nums[m], nums[l]);
                l++;
            }
           m++;
            
           
        }
        
}