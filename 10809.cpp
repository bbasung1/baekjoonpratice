#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a[26];
    fill_n(a,26,-1);
    string b;
    cin>>b;
    for(int i=0;i<b.length();i++){
        int c=b[i]-'a';
        if(a[c]==-1){
            a[c]=i;
        }
    }
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<"\n";
}