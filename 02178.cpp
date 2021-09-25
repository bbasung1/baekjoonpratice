#include <iostream>
#include <queue>
#include <string>
using namespace std;
int a,b;
unsigned short chb[101][101];
bool vis[101][101];
string map[101];
short dx[4]={1,0,-1,0};
short dy[4]={0,1,0,-1};
void bfs(int x,int y){
    vis[x][y];
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(0<=nx&&nx<a&&0<=ny&&ny<b){
                if(map[nx][ny]=='1'&&vis[nx][ny]==0){
                    chb[nx][ny]=chb[x][y]+1;
                    vis[nx][ny]=1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
}
int main(){
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>map[i];
    }
    bfs(0,0);
    cout<<chb[a-1][b-1]+1<<"\n";
}