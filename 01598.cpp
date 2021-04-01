#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int q,w,e,r;
    q=a/4;
    w=a%4==0?4:a%4;
    if(w==4){
        q--;
    }
    e=b/4;
    r=b%4==0?4:b%4;
    if(r==4){
        e--;
    }
    cout<<abs(q-e)+abs(w-r)<<"\n";
}