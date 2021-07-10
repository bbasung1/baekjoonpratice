#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *c=new int[a];
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    int start=0,end=0;
    long long sum=0,ans=0;
    while(end<=a){
        if(sum>=b){
            sum-=c[start++];
        }
        else{
            sum+=c[end++];
        }
        if(sum==b){
            ans++;
        }
    }
    cout<<ans<<"\n";
}