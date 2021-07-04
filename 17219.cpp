#include <map>
#include <string>
#include <iostream>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a,b;
    map<string,string> c;
    cin>>a>>b;
    while(a--){
        string z,x;
        cin>>z>>x;
        c[z]=x;
    }
    while(b--){
        string z;
        cin>>z;
        cout<<c[z]<<"\n";
    }
}