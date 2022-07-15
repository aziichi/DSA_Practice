#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	reverse(arr.begin()+m+1, arr.end());
    
    // Manual way
//     int s = m+1, e=arr.size()-1;
//     while(s<=e){
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
}
