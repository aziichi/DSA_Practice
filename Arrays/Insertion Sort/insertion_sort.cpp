#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int i=1;
    
    while(i<n){
        int temp = arr[i];
        int j = i-1;

        while(j>=0){
            if(arr[j]>temp){
                // shift greater element to right by 1;
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        
        arr[j+1] = temp;
        i++;
    }
}


int main(){

    int arr[5] = {5,3,1,4,2};
    int n = 5;
    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}