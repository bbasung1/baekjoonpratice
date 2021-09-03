#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *b=new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int *d=new int[a];
    int cnt=0;
    //sort(b,b+a);
    for(int i=0;i<a;i++){
        d[i]=1;
        for(int j=i;j>=0;j--){
            if(b[i]<b[j]){
                d[i]=max(d[i],d[j]+1);
            }
            cnt=max(d[i],cnt);
        }
    }
    cout<<cnt<<"\n";
    delete []b;
}