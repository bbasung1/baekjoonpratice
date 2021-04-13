#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int b,c;
    long long w;
    vector <int> ai;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        ai.push_back(t);
    }
    cin>>b>>c;
    for(int i : ai){
        w+=1+(((i-b)-1)/c)+1;
    }
    cout<<w<<"\n";
}