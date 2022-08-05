#include <iostream>
using namespace std;

int peakElement(int arr[], int size){
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end-start)/2; // (start+end)/2

    while (start<end)
    {
        if(arr[mid]<arr[mid+1]){ /* Don't compare with mid-1 because if mid = 0 then mid - 1 will be
                                    -1 (Invalid index)*/
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }

    return start;
    
};



int main(){
    
    int arr[5] = {1,2,5,2,1};
    int size = 5;

    cout<<peakElement(arr, size);
    return 0;

}