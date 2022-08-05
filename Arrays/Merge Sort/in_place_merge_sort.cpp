#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int s, int e, int mid){
    
    int size = e+1;
    
    // Merge two sorted arrays using shell short
    int gap = size/2;
    
    while(gap>0){
        
        int i = 0;
        int j = gap;
        
        while(i<size && j < size){
            if(arr[i]>arr[j]){
                swap(arr[i++], arr[j++]);
            }
            i++;
            j++;
        }
        gap/=2;
    }
    
}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    
    int mid = s+(e-s)/2;
    
    mergeSort(arr, s, mid);
    
    mergeSort(arr, mid+1, e);
    
    merge(arr, s, e, mid);
    
}

int main()
{
    int arr[10] = {7,6,2,1,8,9,0,5,3,4};
    int size = 10;
    
    mergeSort(arr, 0, size-1);
    
    for (int i = 0; i < size; i++) {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}