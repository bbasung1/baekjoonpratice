#include <iostream>
#include <vector>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int n;
    int b,c;
    long long w=0;
    vector <int> ai;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        ai.push_back(t);
    }
    cin>>b>>c;
    for(int i : ai){
        w+=1+((i-b)>0?(((i-b)-1)/c)+1:0);
    }
    cout<<w<<"\n";
}