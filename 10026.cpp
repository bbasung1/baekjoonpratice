#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int a,b;
//unsigned short chb[26][26];
bool vis[101][101];
string map[101];
short dx[4]={1,0,-1,0};
short dy[4]={0,1,0,-1};
void bfs(int x,int y){
    b=1;
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        vis[x][y]=1;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(0<=nx&&nx<a&&0<=ny&&ny<a){
                if(map[nx][ny]==map[x][y]&&vis[nx][ny]==0){
                    q.push({nx,ny});
                    vis[nx][ny]=1;
                   b+=1;
                }
            }
        }
    }
    b=0;
}
int main(){
    int col3=0,col2=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>map[i];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(/*map[i][j]=='1'&&*/vis[i][j]==0){
                bfs(i,j);
                col3++;
            }
        }
    }
    memset(vis,false,sizeof(vis));
        for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(map[i][j]=='G'){
                map[i][j]='R';
            }
        }
    }
        for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(/*map[i][j]=='1'&&*/vis[i][j]==0){
                bfs(i,j);
                col2++;
            }
        }
    }
    cout<<col3<<" "<<col2<<"\n";
    }