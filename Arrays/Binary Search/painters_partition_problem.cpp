#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSol(int k, int m, vector<int> boards, int mid)
{
    int count = 1;
    int partSum = 0;
    for(int i=0; i<m; i++){
        if(partSum + boards[i]<=mid){
            partSum+=boards[i];
        }
        else{
            count++;
            partSum=boards[i];
            if(count > k || boards[i] > mid){
                return false;
            }
        }
    }
    return true;
};

int findLargestMinDistance(vector<int> &boards, int k)
{       
        int s=0;
        int m = boards.size();
        int sum = 0;
        for(int i=0; i<m; i++){
            sum+=boards[i];
        }
        int e = sum;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            if(isPossibleSol(k, m, boards, mid)){    
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1; 
            }
            mid = s + (e-s)/2;
        }
        return ans;
};

int main(){
    vector<int> boards{5,5,5,5};
    int k = 2;
    cout<<findLargestMinDistance(boards, k)<<endl;
    return 0;   
}