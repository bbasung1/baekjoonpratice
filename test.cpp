#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int a;
    int b[100];
    cin>>a;
    string c=to_string(a);
    for(char &k:c){
        cout<<a<<"\n";
        int test=k-'0';
        a+=test;
        cout<<a<<"\n";
    }
}