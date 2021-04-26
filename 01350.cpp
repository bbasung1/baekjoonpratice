#include <iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long *b=new long long[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    long long c;
    cin>>c;
    long long d=0;
    for(auto k=b;k<b+a;k++){
        if(*k!=0){
            d+=((((*k)-1)/c)+1)*c;
        }
    }
    delete []b;
    cout<<d<<"\n";
}