#include <iostream>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    int *b=new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    long long c=0;
    long long d=0;
    for(int i=a-2;i>=0;i--){
        d+=b[i+1];
        c+=b[i]*d;
    }
    cout<<c<<"\n";
}