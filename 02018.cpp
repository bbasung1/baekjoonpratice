#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    /*int *c=new int[a];
    for(int i=0;i<a;i++){
        c[i]=i+1;
    }*/
    int start=1,end=1;
    long long sum=0,ans=1;
    while(end<=a){
        if(sum>=a){
            sum-=start++;
        }
        else{
            sum+=end++;
        }
        if(sum==a){
            ans++;
        }
    }
    cout<<ans<<"\n";
}