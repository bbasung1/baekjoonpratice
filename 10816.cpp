#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    unordered_map<int,int> m;
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(m.find(b)==m.end()){
            m[b]=1;
        }
        else{
            m[b]++;
        }
    }
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(m.find(b)==m.end()){
            cout<<"0 ";
        }
        else{
            cout<<m[b]<<" ";
        }
    }
}