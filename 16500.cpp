#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b;
    cin>>b;
    vector<string>c(b);
    vector<bool>d(a.size()+1,0);
    d[a.size()]=1;
    for(int i=0;i<b;i++){
        cin>>c[i];
    }
    for(int i=a.length()-1;i>=0;i--){
        for(auto j:c){
            if(a.find(j,i)==i&&d[i+j.length()]==1){
                d[i]=1;
                break;
            }else{
                d[i]=0;
            }
        }
    }
    cout<<d[0]<<"\n";
}