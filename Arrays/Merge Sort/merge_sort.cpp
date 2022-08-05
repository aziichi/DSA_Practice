#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int s, int e, int mid){
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    int k = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[k++]; 
    }
    
    k = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[k++]; 
    }
    
    // Merge two sorted arrays
    int i=0,j=0;
    k=s;
    while(i<len1 && j<len2){
        if(first[i]<=second[j]){
            arr[k++] = first[i++];
        }
        else if(first[i]>second[j]){
            arr[k++] = second[j++];
        }
        
    }
    
    while(i<len1){
        arr[k++] = first[i++];
    }
    
    while(j<len2){
        arr[k++] = second[j++];
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
    int arr[4] = {8,4,2,1};
    int size = 4;
    
    mergeSort(arr, 0, size-1);
    
    for (int i = 0; i < size; i++) {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}