#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool cop(vector<int> m, vector<int> n){
    if(m[1]==n[1]){
        return m[0]<n[0];
    }
    else{
    return m[1]<n[1];
    }
}
int main(){
    int a;
    cin>>a;
    vector <vector<int>>b;
    for(int i=0;i<a;i++){
        vector <int> v2;
        b.push_back(v2);
        int c,d;
        cin>>c>>d;
        b[i].push_back(c);
        b[i].push_back(d);
    }
    sort(b.begin(),b.end(),cop);
    /*
    for(auto i:b){
        cout<<i[0]<<" "<<i[1]<<"\n";
    }
    */
    int res=0;
    int last=0;
    for(auto i:b){
        if(last<=i[0]){
            last=i[1];
            res++;
        }
    }
    cout<<res<<"\n";
}