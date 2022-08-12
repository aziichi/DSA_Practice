#include <bits/stdc++>
using namespace std;

/*
125. Valid Palindrome:
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and 
removing all non-alphanumeric characters, it reads the same forward and backward. 
Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Solution 1:
Take one pointer from the start and another from the end of string. If the characters at those positions
not alphanumeric keep moving the pointers. If they are alphanumeric, check if they are equal (remember to
convert both characters to lowercase first). If they are not equal, return false, else keep going.
Return true after traversing the entire string.

Time Complexity -> O(n)
Space Complexity -> O(1)

Solution 2 (Recursive):
Make a copy string and add all the alphanumeric characters in it from original string in lowercase form.
Then pass that string to check function, where the base case is if i>=j return true. Similarly,
if first and last characters are not equal return false, otherwise return the same function but increment
left pointer by 1 and decrement right pointer by 1. Remember to pass string to this function as refernce.

Time Complexity -> O(n)
Space Complexity -> O(n)

*/


/* -------- CODE --------*/

// Solution 1 Implementation:
bool isAlpha(char c){
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
            return true;
        }
            return false;
}

bool isPalindrome(string s) {
    if(s.size()==1){
        return true;
    }

    int i=0, j=s.size()-1;
    
    while(i<j){
        while((!isAlpha(s[i])) && i<j){
            i++;
        }
        while((!isAlpha(s[j]) && i<j)){
            j--;
        }
        
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        
        i++;
        j--;
    }
    
    return true;
}


// Solution 2 Implementation:
bool isAlpha(char c){
    if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
        return true;
    }
        return false;
}
    
bool check(string &s, int i, int j){
    if(i>=j){
        return true;
    } 
    if(tolower(s[i])!=tolower(s[j])){
        return false;
    }
    
    return check(s, ++i, --j);
    
}

bool isPalindrome(string s) {
    string res = "";
    
    for(char i: s){
        if(isAlpha(i)){
            res+=tolower(i);
        }
    }
    
    return check(res, 0, res.size()-1);
}