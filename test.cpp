#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<pair<int,int>>d[11];
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector <int>e(a+1);
    for(int i=1;i<=a;i++){
        e[i]=10000000;
    }
    for(int i=0;i<b;i++){
        int q,z,x;
        cin>>q>>z>>x;
        d[q].push_back(make_pair(z,x));
    }
    e[c]=0;
    priority_queue<pair<int,int>>pq;
    pq.push(make_pair(c,0));
    while(!pq.empty()){
        int cur=pq.top().first;
        int dis=-pq.top().second;
        pq.pop();
        if(e[cur]<dis){
            continue;
        }
        for(int i=0;i<d[cur].size();i++){
            int next=d[cur][i].first;
            int nextdis=dis+d[cur][i].second;
            if(nextdis<e[next]){
                e[next]=nextdis;
                pq.push(make_pair(next,-nextdis));
            }
        }
    }
    for(int i=1;i<=a;i++){
        cout<<e[i]<<" ";
    }
}