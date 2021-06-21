#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int c=stoi(a)+stoi(b);
    a=to_string(c);
    reverse(a.begin(),a.end());
    cout<<stoi(a)<<"\n";
}
    