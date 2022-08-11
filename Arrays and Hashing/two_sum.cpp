#include <bits/stdc++>
using namespace std;

/*
1. Two Sum:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


Solution 1:
Take one element and add it to each remaining elements one by one and compare if the sum is equal 
to target. If yes, add it the result array.

Time Complexity -> O(n^2)
Space Complexity -> O(1)

Solution 2:
Make a copy array and sort it. Take two pointers and start traversing from both ends of the copy array. 
Sum the values at the pointer positions and check if they are == target, if yes, 
then add these two values to two variables. If the sum is > target, decrement the right pointer, otherwise
increment the left pointer. Lastly, traverse the original array, find the elements stored from
copy array and add their indexes to the result array.

Time Complexity -> O(nlogn) or O(n^2) <Depends on sorting algorithm>
Space Complexity -> O(n)

*/


/* -------- CODE --------*/


// Solution 1 Implementation:
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        
        return ans;
}

// Solution 2 Implementation:
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    vector<int> temp = nums;
    
    sort(temp.begin(), temp.end());
    
    int i=0, j=temp.size()-1;
    
    int first_element=0, second_element=0;
    
    while(i<j){
        if(temp[i]+temp[j]==target){
            first_element = temp[i];
            second_element = temp[j];
            break;
        }
        else if(temp[i]+temp[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==first_element || nums[i]==second_element){
            ans.push_back(i);
        }
    }
    return ans;
}
