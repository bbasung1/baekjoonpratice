#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c=0,e=100000001;
    cin>>a>>b;
    int d=sqrt(a-1)+1;
    for(d;d*d<=b;d++){
        c+=d*d;
        if(e>d*d){
            e=d*d;
        }
    }
    if(c==0){
        cout<<"-1\n";
    }
    else{
        cout<<c<<"\n"<<e<<"\n";
    }
}