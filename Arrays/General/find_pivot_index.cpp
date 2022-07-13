#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) { // Can replace with array as well with its size as parameter.
        
            int total = 0;
            int size = nums.size();
            for(int i=0; i<size; i++){
                total += nums[i];
            }
            
            int leftmost = 0;
            int rightmost = 0;
            for(int i=0; i<size; i++){
                rightmost = total - leftmost - nums[i];
                if(leftmost == rightmost){
                    return i;
                }
                leftmost += nums[i]; 
            }
            return -1;
};

/* ALTERNATIVE METHOD
int pivotIndex(vector<int>& nums) {
        int n=nums.size(), leftSum=0;
        int rightSum = accumulate(nums.begin(), nums.end(), 0); // sum of array
        for(int i=0; i<=n-1; i++){//as leftmost pivot needed, traversing from left
            rightSum -= nums[i];
            if(leftSum==rightSum) return i;
            leftSum += nums[i];
        }
        return -1;
};
*/

int main(){
    vector<int> nums{1,7,3,6,5,6};

    cout<<pivotIndex(nums)<<endl;
}