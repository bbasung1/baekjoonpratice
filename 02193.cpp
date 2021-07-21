#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long a;
    int b[3]={1,1,2};
    cin>>a;
    if(a<=3){
        cout<<b[a-1]<<"\n";
    }
    else{
        long long *c=new long long[a];
        c[0]=b[0];c[1]=b[1];c[2]=b[2];
        for(int i=3;i<a;i++){
            c[i]=c[i-2]+c[i-1];
        }
        cout<<c[a-1]<<"\n";
    }

}