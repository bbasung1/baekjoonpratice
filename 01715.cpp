#include <iostream>
#include <queue>
using namespace std;
int main(){
    int a;
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    cin>>a;
    priority_queue<int,vector<int>,greater<int>>b;
    for(int i=0;i<a;i++){
        int c;
        cin>>c;
        b.push(c);
    }
    long long ans=0;
    for(;a>1;a--){
        int mid1=b.top();
        b.pop();
        int mid2=b.top();
        b.pop();
        ans=ans+mid1+mid2;
        b.push(mid1+mid2);
    }
    cout<<ans<<"\n";
}