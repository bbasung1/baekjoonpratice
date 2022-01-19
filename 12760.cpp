#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int b,c;
    cin>>b>>c;
    vector<vector<int>>a(b,vector<int>(c,0));
    vector<int>win(b,0);
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
        sort(a[i].begin(),a[i].end());
    }
    for(int i=0;i<c;i++){
        int mx=0;
        for(int j=0;j<b;j++){
            mx=max(mx,a[j][i]);
        }
        for(int j=0;j<b;j++){
            if(mx==a[j][i]){
                win[j]++;
            }
        }
    }
    int mx=*max_element(win.begin(),win.end());
    for(int i=0;i<b;i++){
        if(mx==win[i]){
            cout<<i+1<<" ";
        }
    }
    cout<<"\n";

}