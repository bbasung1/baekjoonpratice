#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long *b=new long long[a+1];
    b[0]=0;
    b[1]=0;
    for(int i=2;i<=a;i++){
        b[i]=b[i-1]+1;
        if(i%2==0){
            b[i]=min(b[i],b[i/2]+1);
        }
        if(i%3==0){
            b[i]=min(b[i],b[i/3]+1);
        }
    }
    cout<<b[a];
}