#include <bits/stdc++.h>
using namespace std;

/*
217. Contains Duplicate:
Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.


Solution 1:
Take one element and compare with rest of the elements, if we find duplicate, return true.

Time Complexity -> O(n^2)
Space Complexity -> O(1)

Solution 2:
Sort the array and use two pointers to check adjacent elements, if they are same, return true.

Time Complexity -> O(nlogn) or O(n^2) <Depends on sorting algorithm>
Space Complexity -> O(1)

Solution 3:
Use a hash map to keep count of the elements, if the size of hash map == size of array, then it
does not contain duplicates, return false.

Time Complexity -> O(n)
Space Complexity -> O(n)
*/


/* -------- CODE --------*/


// Solution 1 Implementation:
bool containsDuplicate(vector<int>& nums) {
    for(int i=0; i<nums.size()-1; i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}

// Solution 2 Implementation:
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    
    int i=0, j=1;
    while(i<nums.size()-1 && j<nums.size()){
            if(nums[i]==nums[j]){
            return true;
        }
        i++;
        j++;
    }
    return false;
}

// Solution 3 Implementation:
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> um;
    
    for(int i=0; i<nums.size(); i++){
        um[nums[i]]++;
    }
    
    if(um.size()==nums.size()){
        return false;
    }
    else{
        return true;
    }
}