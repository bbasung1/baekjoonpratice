#include <iostream>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a,b;
    cin>>a>>b;
    int **c1=new int*[a];
    for(int i=0;i<a;i++){
        c1[i]=new int[b];
        for(int j=0;j<b;j++){
            cin>>c1[i][j];
        }
    }
    int d,e;
    cin>>d>>e;
    int **c2=new int*[d];
    for(int i=0;i<d;i++){
        c2[i]=new int[e];
        for(int j=0;j<e;j++){
            cin>>c2[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<e;j++){
            int test=0;
            for(int l=0;l<b;l++){
                test+=c1[i][l]*c2[l][j];
            }
            cout<<test<<" ";
        }
        cout<<"\n";
    }
}