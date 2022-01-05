#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool *c=new bool[a+1];
    int cnt=-1;
    for(int i=2;i<=a;i++){
        for(int j=0;j<=a;j+=i){
            if(c[j]==0){
                c[j]=1;
                cnt++;
                if(cnt==b){
                    cout<<j<<"\n";
                    return 0;
                }
            }
        }
    }
}