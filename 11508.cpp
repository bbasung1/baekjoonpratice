#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    int *b=new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    sort(b,b+a,greater<>());
    int cost=0;
    for(int i=0;i<a;i++){
        if(i%3!=2){
            cost+=b[i];
        }
    }
    cout<<cost<<"\n";
}