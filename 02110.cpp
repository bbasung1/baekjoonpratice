#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool test(int a,vector<int>b,int d){
    int i=1,pre=0,cnt=1;
    for(;i<b.size();i++){
        if(b[i]-b[pre]>=a){
            cnt++;
            pre=i;
        }
    }
    //cout<<"test상황:"<<cnt<<"\n";
    return cnt>=d;
}
int main(){
    int a,b;
    cin>>a>>b;
    vector<int>c(a);
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    sort(c.begin(),c.end());
    int lo=1,hi=c[a-1]+1;
    while(lo+1<hi){
        int mi=(lo+hi)/2;
        if(test(mi,c,b)){
            lo=mi;
        }else{
            hi=mi;
        }
        //cout<<lo<<" "<<hi<<"\n";
    }
    cout<<lo<<"\n";
}