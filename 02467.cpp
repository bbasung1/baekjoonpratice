#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long *b=new long long[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    //sort(b,b+a);
    long long start=0,end=a-1;
    long long a1,a2;
    long long ans=2000000000;
    while(start<end){
        if(abs(b[start]+b[end])<ans){
            ans=abs(b[start]+b[end]);
            a1=b[start];
            a2=b[end];
            if(b[start]+b[end]==0){
                break;
            }
        }
        if(b[start]+b[end]<0){
            start++;
        }
        else{
            end--;
        }
    }
    cout<<a1<<" "<<a2<<"\n";
}