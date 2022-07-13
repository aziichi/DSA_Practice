#include <iostream>
using namespace std;

int getPivot(int arr[], int size){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]>arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    
    return start;
};


int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;

    int mid = start + (end-start)/2; // (start+end)/2

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
    
};

int findPosition(int arr[], int size, int key){
    int pivot = getPivot(arr, size); 
    if(key>=arr[pivot] && key<=arr[size-1]){
        return binarySearch(arr, pivot, size-1, key);
    } else {
        return binarySearch(arr, 0, pivot-1, key);
    }
}

int main(){
    
    int arr[5] = {7,9,1,2,3};
    int size = 5;
    cout<<findPosition(arr, size, 9);
    return 0;

}