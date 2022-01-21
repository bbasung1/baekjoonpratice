#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *c=new int[a];
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    vector<int>d(b+1,100001);
    d[0]=0;
    for(int i=0;i<a;i++){
        for(int j=c[i];j<=b;j++){
            //cout<<"cur j:"<<j<<" cur d[j]:"<<d[j]<<"\n";
            d[j]=min(d[j],1+d[j-c[i]]);
            //cout<<"change j:"<<j<<" change d[j]:"<<d[j]<<"\n";
        }
    }
    if(d[b]==100001){
        cout<<"-1\n";
    }else{
        cout<<d[b]<<"\n";
    }
}