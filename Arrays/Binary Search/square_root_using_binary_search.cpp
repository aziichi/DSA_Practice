#include <iostream>
using namespace std;

int getIntSqrt(int num){
    if(num==0)
        return 0;

    int start = 0;
    int end = num;

    int mid = start + (end-start)/2; // (start+end)/2
    int ans = -1;
    while (start<end)
    {   
        int sqr = mid*mid;
        if(sqr==num){
            return mid;
        }
        else if(sqr<num){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2; // (start+end)/2
    }

    return ans;
    
};

double getPreciseSqrt(int num, int tempsol, int precision){
    double factor = 1;
    double ans = tempsol;

    for(int i=0; i<precision; i++){
        factor /= 10;
        for(double j=ans; (j*j)<num; j+=factor){
            ans = j;
        }
    }

    return ans;
};

double getSqrt(int num, int precision){
    int tempsol = getIntSqrt(num);
    return getPreciseSqrt(num, tempsol, precision);
}

// Test for the function;
void testGetPreciseSqrt(double (*func)(int,int,int), int a, int b, int c, double assertion){
    if(func(a,b,c)==assertion){
        cout<<"Passed";
    }
    else{
        cout<<"Failed";
    }
}   

int main(){
    int n = 2;
    cout<<getSqrt(n, 3)<<endl;
    return 0;

}