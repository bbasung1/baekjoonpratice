#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    string a;
    cin>>a;
    string*b=new string[a.length()];
    for(int i=0;i<a.length();i++){
        b[i]=a.substr(i,a.length());
    }
    sort(b,b+a.length());
    for(int i=0;i<a.length();i++){
        cout<<b[i]<<"\n";
    }
}