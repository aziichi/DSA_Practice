#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size, int s){
	if(s==size){
	    return ;
	}
	
	for(int i=1; i<size; i++){
	    if(arr[i]<arr[i-1]){
	        int temp = arr[i];
	        arr[i] = arr[i-1];
	        arr[i-1] = temp;
	    }
	}
	
	insertionSort(arr, size, s+1);
}

int main(){
	int arr[10] = {8,2,4,9,0,7,5,3,1,6};
	int size = 10;
	
	insertionSort(arr, size, 0);
	
	for(int i=0; i<size; i++){
	    cout<<arr[i]<<" ";
	}
}