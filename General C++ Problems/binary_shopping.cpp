#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string binaryShopping(string S, int P)
{    
    int n = S.size();
    int count = 2;

    for(int i=n-1; i>=0; i--){
        if(S[i]=='1' && count>0){
           S[i] = '0';
           count--;
        }
    }

    while(count>0){
        S[0] ^=1;
        count--;
    }

    return S;
}


int main(){

    cout<<binaryShopping("111111 ", 2)<<endl;
    return 0;
}