#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main(){
    while(1){
        int a='a';
        string b;
        getline(cin,b);
        if(b=="*"){
            break;
        }
        for(a;a<='z';a++){
            int k=count(b.begin(),b.end(),a);
            if(k==0){
                cout<<"N"<<endl;
                break;
            }
        }
        if(a==123){
            cout<<"Y"<<endl;
        }
    }
}