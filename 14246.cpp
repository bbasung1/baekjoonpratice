#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    int *c=new int[a];
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    cin>>b;
    int start=0,end=0;
    long long sum=0,ans=0;
    while(end<=a){
        if(sum>=b){
            ans+=a-end;
            sum-=c[start++];
        }
        else{
            sum+=c[end++];
        if(sum>=b){
            ans+=(a-end);
        }
        }
    }
    cout<<ans<<"\n";
}