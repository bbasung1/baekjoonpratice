#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int *c=new int[b];
        for(int i=0;i<b;i++){
            cin>>c[i];
        }
        long long ans=0;
        for(int i=0;i<b;i++){
            for(int j=i+1;j<b;j++){
                ans+=gcd(c[i],c[j]);
            }
        }
        cout<<ans<<"\n";
    }
}