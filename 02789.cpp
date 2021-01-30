#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b="CAMBRIDGE";
    for(char &m:a){
        int c=0;
        for(char &n:b){
            if(m==n){
                c=1;
                break;
            }
        }
        if(c==0){
            cout<<m;
        }
    }
    cout<<endl;
}