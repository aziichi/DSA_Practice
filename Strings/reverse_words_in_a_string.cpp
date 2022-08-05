#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverseString(string &s, int a, int b){
    int i = a;
    int j = b-1;
    
    while(i<=j){
        swap(s[i++], s[j--]);
    }
}

void reverseWords(string &s){
    int l=0;
    int r=0;
    
    while(l<s.size() && r<s.size()){
        while(s[r]!=' ' && r<s.size()){
            r++;
        }
        
        reverseString(s, l, r);
        l = r+1;
        r++;
    }
    
}


int main()
{
    string str = "My name is Azan";
    
    reverseWords(str);
    
    cout<<str<<endl;
    
    return 0;
}