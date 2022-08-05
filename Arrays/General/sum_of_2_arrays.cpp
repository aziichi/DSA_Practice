#include <iostream>
#include <vector>
using namespace std;


void reverse(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    
    while(i<=j){
        swap(v[i++], v[j--]);
    }
}


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    vector<int> ans;
	int i = n-1;
    int j = m-1;
    int carry = 0;
    while(i>=0 && j>=0){
        int sum = a[i--] + b[j--] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    
    while(i>=0){
        int sum = a[i--] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
    }
     while(j>=0){
        int sum = b[j--] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans);
    return ans;
}