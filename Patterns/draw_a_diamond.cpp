#include <iostream>
using namespace std;

void printTheDiamond(int r, int c, int s)
{
    for(int i=0; i<r; i++){
        int z = s;

        for(int j=1; j<=s; j++){
            for(int x=0; x<c; x++){
                for(int k=1; k<=2*s; k++){
                    if(k<z || k>2*s-z+1){
                        cout<<"e";
                    }
                    else if(k==z){
                        cout<<"/";
                    }
                    else if(k==2*s-z+1){
                        cout<<"\\";
                    }
                    else{
                        cout<<"o";
                    }
                }
            }
            z--;
            cout<<endl;
        }

        int e=1;
        for(int j=1; j<=s; j++){
            for(int x=0; x<c; x++){
                for(int k=1; k<=2*s; k++){
                    if(k<e || k>2*s-e+1){
                        cout<<"e";
                    }
                    else if(k==e){
                        cout<<"\\";
                    }
                    else if(k==2*s-e+1){
                        cout<<"/";
                    }
                    else{
                        cout<<"o";
                    }
                }
            }
            e++;
            cout<<endl;
        }
    }
}

int main(){
    printTheDiamond(1,1,1);
    return 0;
}