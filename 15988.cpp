#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a,b;
    long long *c=new long long[1000001];
    c[1]=1;
    c[2]=2;
    c[3]=4;
    cin>>a;

    while(a--){
        cin>>b;
        if(b<=3){
            cout<<c[b]<<"\n";
            continue;
        }
        for(int i=4;i<=b;i++){
            c[i]=(c[i-3]+c[i-2]+c[i-1])%1000000009;
        }
        cout<<c[b]<<"\n";
    }
}