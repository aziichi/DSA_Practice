#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size, int s){
	if(s==size){
		return;
	}
	
	int minIdx = s;
	
	for(int i=s; i<size; i++){
		if(arr[i]<arr[minIdx]){
		    minIdx = i;
		}
	}
	
	swap(arr[s], arr[minIdx]);
	
	
	selectionSort(arr, size, s+1);
	
	
	
}

int main(){
	int arr[10] = {8,2,4,9,0,7,5,3,1,6};
	int size = 10;
	
	selectionSort(arr, size, 0);
	
	for(int i=0; i<size; i++){
	    cout<<arr[i]<<" ";
	}
}