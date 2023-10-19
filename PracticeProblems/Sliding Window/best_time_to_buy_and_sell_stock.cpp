#include <bits/stdc++>
using namespace std;

/*
121. Best Time to Buy and Sell Stock:
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Solution 1:
Take two pointers and traverse the array by incrementing right pointer, while traversing check 
if value at left pointer < value at right pointer, if yes, then calculate the profit at that interval 
by subtracting value1 from value2.Find the maximum of this current value and the previous max, and 
set it to max. If left pointer > value at right pointer, then move left pointer to the position of 
right pointer.

Time Complexity -> O(n)
Space Complexity -> O(1)

*/


/* -------- CODE --------*/

// Solution 1 Implementation:
int maxProfit(vector<int>& prices) {
    int i = 0, j=1;
    int maxP = 0;
    
    while(j<prices.size()){
        if(prices[i]<prices[j]){
            int profit = prices[j]-prices[i];
            maxP = max(maxP, profit);
        }
        else{
            i=j;
        }
        j++;
    }
    
    return maxP;
}