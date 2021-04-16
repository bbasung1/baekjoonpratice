#include<iostream>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    while(a--){
        bool d=true;
        int b,c;
        cin>>b>>c;
        for(int i=1;i<=c/2;i++){
            if(i*(c-i)==b){
                cout<<"yes\n";
                d=false;
                break;
            }
        }
        if(d){
            cout<<"no\n";
        }
    }
}