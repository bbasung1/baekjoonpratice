#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<int>a(8);
    for(int i=0;i<8;i++){
        cin>>a[i];
    }
    vector<int>b=a;
    sort(b.begin(),b.end(),greater<int>());
    vector<int>c;
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=b[i];
        c.push_back(find(a.begin(),a.end(),b[i])-a.begin()+1);
    }
    sort(c.begin(),c.end());
    cout<<sum<<"\n";
    for(auto i:c){
        cout<<i<<" ";
    }   
    cout<<"\n";
}