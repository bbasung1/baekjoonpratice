#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool com(vector <int> &m,vector <int> &n){
    if(m[0]==n[0]){
        return m[1]<n[1];
    }
    else{
        return m[0]<n[0];
    }
}
int main(){
    int b;
    cin>>b;
    vector < vector <int> > a(b,vector <int>(2,0));
    for(int i=0;i<b;i++){
        cin>>a[i][0]>>a[i][1];
    }
    sort(a.begin(),a.end(),com);
        for(int i=0;i<b;i++){
        cout<<a[i][0]<<" "<<a[i][1]<<"\n";
    }
}