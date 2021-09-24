#include <iostream>
#include <algorithm>
using namespace std;
typedef pair<int,int> p;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int c;
    cin>>c;
    p *d=new p[c];
    for(int i=0;i<c;i++){
        cin>>d[i].first>>d[i].second;
    }
    sort(d,d+c);
    int res=0,l=-(1e9+1),r=-(1e9+1);
    for(int i=0;i<c;i++){
        if(r<d[i].first){
            res+=r-l;
            l=d[i].first;
            r=d[i].second;
        }
        else{
            r=max(r,d[i].second);
        }
    }
    res+=r-l;
    cout<<res<<"\n";
}