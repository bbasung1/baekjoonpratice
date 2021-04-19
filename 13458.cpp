#include <iostream>
#include <vector>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int n;
    int b,c;
    long long w=0;
    cin>>n;
    int *ai=new int[n];
    for(int i=0;i<n;i++){
        cin>>ai[i];
    }
    cin>>b>>c;
    for(int i=0;i<n;i++){
        w+=1+((ai[i]-b)>0?(((ai[i]-b)-1)/c)+1:0);
    }
    cout<<w<<"\n";
    delete[] ai;
}