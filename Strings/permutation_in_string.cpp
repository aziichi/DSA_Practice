#include <iostream>
using namespace std;

bool checkSolution(int a[], int b[]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i])
            return false;
    }
    
    return true;
}

bool checkInclusion(string s1, string s2) {
    int count1[26] = {0};
    
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] -'a';
        count1[index]++;
    }
    
    int count2[26] = {0};
    
    int i=0;
    int windowSize=s1.length();
    
    while(i<windowSize && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    
    if(checkSolution(count1, count2))
        return true;
    
    // Further process the window.
    
    while(i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        index = s2[i-windowSize] - 'a';
        count2[index]--;
        
            i++;
        
        if(checkSolution(count1, count2))
            return true;
        
        
    }
    
    return false;
    
}