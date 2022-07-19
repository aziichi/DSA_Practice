#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
        int i=0;
        int ansIdx=0;
        int n = chars.size();
        
        while(i<n){
            int j=i+1;
            
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            
            chars[ansIdx++] = chars[i];
            
            int count = j-i;
            
            if(count>1){
                string c = to_string(count);
                
                for(char el: c){
                    chars[ansIdx++] = el;
                }
            }
            
            i=j;
        }
        
        return ansIdx;
    }