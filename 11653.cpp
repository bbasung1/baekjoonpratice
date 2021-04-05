#include <iostream>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);::ios::sync_with_stdio(0);
    int a;
    cin>>a;
        for(int i=2;i*i<=a;i++){
            while(a%i==0){
                cout<<i<<"\n";
                a/=i;
            }
        }
        if(a>1){
            cout<<a<<"\n";
        }
}