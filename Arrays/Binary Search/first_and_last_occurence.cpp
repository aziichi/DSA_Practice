#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end-start)/2; // (start+end)/2
    int ans = -1;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
    
};

int lastOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end-start)/2; // (start+end)/2
    int ans = -1;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
    
};



int main(){
    
    int arr[5] = {1,3,3,3,5};
    int size = 5;

    cout<<firstOccurence(arr, size, 3)<<endl;
    cout<<lastOccurence(arr, size, 3)<<endl;
    cout<<(lastOccurence(arr, size, 3)-firstOccurence(arr, size, 3))+1<<endl;
    return 0;

}