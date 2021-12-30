#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a,b;
    cin>>a>>b;
    long long *c=new long long[a+1];
    c[0]=0;
    for(int i=1;i<=a;i++){
        cin>>c[i];
        c[i]+=c[i-1];
    }
    long long d=0;
    for(int i=0;i<=a-b;i++){
        long long e=c[i+b]-c[i];
        d=max(d,e);
    }
    cout<<d<<"\n";
}