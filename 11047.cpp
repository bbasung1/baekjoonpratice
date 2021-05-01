#include <iostream>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    int p[10];
    for(int i=n-1;i>=0;i--){
        cin>>p[i];
    }
    int k=0;
    for(auto i:p){
        k+=(m/i);
        m%=i;
        if(m==0){
            break;
        }
    }
    cout<<k<<"\n";
}