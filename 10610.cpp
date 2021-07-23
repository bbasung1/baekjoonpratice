#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(char &m,char &n){
        return m>n;
}
int main() {
    string a;
    cin>>a;
    int b=0;
    bool c=false;
    for(char &d:a){
        b+=d-'0';
        if(d-'0'==0){
            c=true;
        }
    }
    if(b%3==0&&c){
        sort(a.begin(),a.end(),cmp);
        cout<<a<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}