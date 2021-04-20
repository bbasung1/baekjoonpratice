#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int p[200000];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
    cout<<p[(n - 1) / 2]<<"\n";
}