#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=a;
    for(a;a>0;--a){
        for(int i=0;i<b;i++){
            if(i<b-a){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}