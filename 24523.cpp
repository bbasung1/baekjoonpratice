#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    cin.tie();cout.tie();ios::sync_with_stdio();
    int a;
    cin>>a;
    vector<int>b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    stack<int>c;
    for(int i=0;i<a;i++){
        while(!c.empty()&&b[c.top()]!=b[i]){
            b[c.top()]=i+1;
            c.pop();
        }
        c.push(i);
    }
    while(!c.empty()){
        b[c.top()]=-1;
        c.pop();
    }
    for(auto i:b){
        cout<<i<<" ";
    }
    cout<<"\n";
}