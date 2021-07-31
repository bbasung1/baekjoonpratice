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
    long long sum=c[0],ans=a+1;
    while(end<a&&end>=start){
        if(sum<b){
            sum+=c[++end];
        }
        else if(sum==b){
            if(ans>(end-start+1)){
                ans=end-start+1;
            }
            sum+=c[++end];
        }
        else{
            if(ans>(end-start+1)){
                ans=end-start+1;
            }
            sum-=c[start++];
        }
    }
    if(ans==a+1){
        cout<<"0\n";
    }
    else{
        cout<<ans<<"\n";
    }
}