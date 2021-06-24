#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    long long b=((a[1][0]-a[0][0])*(a[2][1]-a[0][1]))-((a[1][1]-a[0][1])*(a[2][0]-a[0][0]));
    if(b>0){
        cout<<"1\n";
    }
    else if(b<0){
        cout<<"-1\n";
    }
    else{
        cout<<"0\n";
    }
}