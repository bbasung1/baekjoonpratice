#include <iostream>
using namespace std;
int main(){
    int a1,a0;
    cin>>a1>>a0;
    int c;
    cin>>c;
    int n0;
    cin>>n0;
    if(a1==c){
        if(0<a0){
            cout<<"1\n";
        }else{
            cout<<"0\n";
        }
    }else{
        //cout<<"!!\n";
    if(n0<-(a0/(a1-c))||a1<c){
        cout<<"0\n";
    }else{
        cout<<"1\n";
    }
    }
}