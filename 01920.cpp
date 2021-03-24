#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a;
    vector <int>b;
    int k;
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
        cin>>a;
    int al=a;
    while(a--){
        int f;
        cin>>f;
        b.push_back(f);
    }
    sort(b.begin(),b.end());
    cin>>a;
    al=a;
    while(a--){
        int c;
        cin>>c;
        cout<<binary_search(b.begin(),b.end(),c)<<"\n";
}
}