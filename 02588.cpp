#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    string b;
    cin>>a>>b;
    for(int i=2;i>=0;--i){
        int d= b[i]-'0';
        cout<<a*d<<"\n";
    }
    cout<<a*stoi(b)<<"\n";
}