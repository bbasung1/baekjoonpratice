#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool check(int n,vector<string>arr,int size){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (i==j){
                continue;
            }
            if(arr[i].substr(size)==arr[j].substr(size)){
                return false;
            }
        }
    }
            return true;
}
int sol(int n,vector<string>arr){
    for(int i=arr[0].size()-1;i>=0;i--){
        if(check(n,arr,i)){
            return arr[0].size()-i;
        }
    }
    return arr[0].size();
}
int main(){
    int a;
    cin>>a;
    vector<string>b;
    for(int i=0;i<a;i++){
        string c;
        cin>>c;
        b.push_back(c);
    }
    int res=sol(a,b);
    cout<<res<<"\n";
}