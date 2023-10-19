#include <bits/stdc++>
using namespace std;

/*
242. Valid Anagram:
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.

Solution 1:
Check if the length is same, then store each character of each string in two separate hash maps respectively, 
and compare their count. 

Time Complexity -> O(n)
Space Complexity -> O(n)

Solution 2:
Check if the length is same, then sort both strings and compare them.

Time Complexity -> O(nlogn) or O(n^2) <Depends on the sorting algorithm>
Space Complexity -> O(1) or O(n) <Depends on the sorting algorithm>
*/


/* -------- CODE --------*/

// Solution 1 Implementation:
bool isAnagram(string s, string t) {
        map<char, int> m, m2;
        
        for(auto i: s){
            m[i]++;
        }
        
        for(auto i: t){
            m2[i]++;
        }
        
        if(s.size()!=t.size()){
            return false;
        }
        
        for(auto i: m){
            if(m[i.first] != m2[i.first]){
                return false;
            }
        }
        
        return true;
}


// Solution 2 Implementation:
bool isAnagram(string s, string t) {
    if(s.size()!=t.size()){
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    for(int i=0; i<s.size(); i++){
        if(s[i]!=t[i]){
            return false;
        }
    }
    return true;
}