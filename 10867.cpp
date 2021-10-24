#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    vector<int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    for(const auto& k:b){
        cout<<k<<" ";
    }
}