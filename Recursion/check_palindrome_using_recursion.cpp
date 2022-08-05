#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string& s, int i){
	int n = s.size();
	
	if(i>n-i-1){
		return true;
	}
	if(s[i]!=s[n-i-1]){
		return false;
	}
	checkPalindrome(s, i+1);
}


int main(){
	string s = "racecar";
	
	cout<<checkPalindrome(s, 0);
}