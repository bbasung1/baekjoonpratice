#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a,b;
    cin>>a>>b;
    vector <string>c(a);
    int d=0;
    while(a--){
        cin>>c[a];
    }
    sort(c.begin(),c.end());
    while(b--){
        string tmp;
        cin>>tmp;
        if(!binary_search(c.begin(),c.end(),tmp)){
            d++;
        }
    }
    cout<<d<<"\n";
}