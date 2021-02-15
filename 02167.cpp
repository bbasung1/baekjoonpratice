#include <iostream>
using namespace std;
int main(){
    int a[300][300];
    int b,c;
    cin>>b>>c;
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int d;
    cin>>d;
    for(d;d>0;d--){
        int q,w,e,r;
        cin>>q>>w>>e>>r;
        int sum=0;
        for(int i=q-1;i<=e-1;i++){
            for(int j=w-1;j<=r-1;j++){
                sum+=a[i][j];
            }
        }
        cout<<sum<<"\n";
    }
}