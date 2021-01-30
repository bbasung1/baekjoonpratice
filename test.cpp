#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b="CAMBRIDGE";
    string d;
    for(char &m:a){
        int c=0;
        for(char &n:b){
            if(m==n){
                c=1;
                break;
            }
        }
        if(c==0){
            //d.append(m);
        }
    }
    cout<<endl;
}