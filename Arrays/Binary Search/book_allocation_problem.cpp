#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSol(int n, int m, vector<int> time, long long int mid)
{
    int count = 1;
    long long int partSum = 0;
    for(int i=0; i<m; i++){
        if(partSum + time[i]<=mid){
            partSum+=time[i];
        }
        else{
            count++;
            partSum=time[i];
            if(count > n || time[i] > mid){
                return false;
            }
        }
    }
    return true;
};

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
        long long int s=0;
        long long int sum = 0;
        for(int i=0; i<m; i++){
            sum+=time[i];
        }
        long long int e = sum;
        long long int mid = s + (e-s)/2;
        long long int ans = -1;
        while(s<=e){
            if(isPossibleSol(n, m, time, mid)){    
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

    vector<int> chapters{10,20,30,40,50};
    int n = 2;
    int m = chapters.size() - 1;
    cout<<ayushGivesNinjatest(n,m, chapters)<<endl;
    return 0;   
}