#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a,b;
    cin>>a>>b;
    map<string,bool>c;
    int d=0;
    while(a--){
        string tmp;
        cin>>tmp;
        c.insert({tmp,1});
    }
    while(b--){
        string tmp;
        cin>>tmp;
        if(c[tmp]){
            d++;
        }
    }
    cout<<d<<"\n";
}