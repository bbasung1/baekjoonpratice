#include <iostream>
#include <queue>
#include <vector>

#define MAX 20010
#define INF 987654321
using namespace std;
    vector<pair<int, int>>d[MAX];
int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int a,b,c;
    cin>>a>>b;
    int* e = new int[a+1];
    
    for(int i=0;i<b;i++){
        int q,z,x;
        cin>>q>>z>>x;
        d[q].push_back(make_pair(z,x));
        
    }
    int f;
    cin>>c>>f;
    for(int i=1;i<=a;i++){
        e[i]= INF;
    }
    e[c]=0;
    priority_queue<pair<int, int>>pq;
    pq.push(make_pair(0,c));
    while(!pq.empty()){
        int cur=pq.top().second;
        int dis=-pq.top().first;
        pq.pop();
        if(e[cur]<dis)continue;
        for(int i=0;i<d[cur].size();i++){
            int next=d[cur][i].first;
            int nextdis=d[cur][i].second;
            if(nextdis+dis<e[next]){
                e[next]=nextdis+dis;
                pq.push(make_pair(-e[next],next));
            }
        }
    }
    /*for(int i=1;i<=a;i++){
        e[i]== INF?cout<<"INF\n" : cout << e[i] << "\n";
    }*/
    cout<<e[f]<<"\n";
}