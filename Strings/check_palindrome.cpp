#include <iostream>
using namespace std;

bool checkPalindrome(string s)
{
    int i = 0;
    int j = s.size()-1;
    
    while(i<=j){
        if(!(tolower(s[i])>='a' && tolower(s[i])<='z') && !(s[i]>='0' && s[i]<='9')){
            i++;
            continue;
        }
        else if(!(tolower(s[j])>='a' && tolower(s[j])<='z') && !(s[j]>='0' && s[j]<='9')){
            j--;
            continue;
        }
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    
    return true;
}