#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
	if(size==0){
		return;
	}
	
	for(int i=0; i<size-1; i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}
	
	bubbleSort(arr, size-1);
}

int main(){
	int arr[5] = {1,3,2,5,4};
	
	bubbleSort(arr, 5);
	
	for(int i=0; i<5; i++){
	    cout<<arr[i]<<" ";
	}
}