int partition(vector<int>& arr, int s, int e){
    
    int pivot = arr[s];
    int cnt = 0;
    
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    
    int pivotIdx = s + cnt;
    swap(arr[pivotIdx], arr[s]);
    
    int i=s, j=e;
    
    while(i<pivotIdx && j>pivotIdx){ 
        while(arr[i] <= pivot){
            i++;
        }
        
        while(arr[j] > pivot){
            j--;
        }
        
        if(i<pivotIdx && j>pivotIdx){
            swap(arr[i++], arr[j--]);
        }
    }
    
    return pivotIdx;
}


void quickSortFunc(vector<int>& arr, int s, int e){
    if(s>=e){
        return;
    }
    
    int p = partition(arr, s, e);
    
    quickSortFunc(arr, s, p-1);
    quickSortFunc(arr, p+1, e);
    
}


vector<int> quickSort(vector<int> arr)
{        
    quickSortFunc(arr, 0, arr.size()-1);
    return arr;
    
}