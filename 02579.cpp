#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    long long *b=new long long[a];
    int *c=new int[a];
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    b[0]=c[0];
    b[1]=c[0]+c[1];
    b[2]=max(c[1]+c[2],c[0]+c[2]);
    for(int i=3;i<a;i++){
        b[i]=max(b[i-2]+c[i],b[i-3]+c[i-1]+c[i]);
    }
    cout<<b[a-1];
}