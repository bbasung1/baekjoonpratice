#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long a;
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    cin>>a;
    long long *b=new long long[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    sort(b,b+a);
    for(int i=0;i<a-1;i++){
        cout<<b[i]<<" ";
    }
    cout<<b[a-1]<<"\n";
}