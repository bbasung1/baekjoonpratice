#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    vector <int> a;
    int b;
    cin>>b;
    while(b--){
        int c;
        cin>>c;
        a.push_back(c);
    }
    sort(a.begin(),a.end());
    for(int e:a){
        cout<<e<<"\n";
    }
}