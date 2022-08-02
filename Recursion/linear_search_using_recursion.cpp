#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int i, int key){
	if(size==0){
		return -1;
	}
	if(arr[i]==key)
		return i;
	
	return linearSearch(arr, size-1, i+1, key);
}


int main(){
	int arr[5] = {1,2,3,4,5};
	
	int key = 3;
		
	cout<<linearSearch(arr, 5, 0, key);
}