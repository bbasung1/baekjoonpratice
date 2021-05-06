#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a;
        cin>>a;
    vector <int>b(a);
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    while(a--){
        cin>>b[a];
    }
    sort(b.begin(),b.end());
    cin>>a;
    while(a--){
        int c;
        cin>>c;
        cout<<binary_search(b.begin(),b.end(),c)<<" ";
}
}