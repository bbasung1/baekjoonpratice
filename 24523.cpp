#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    vector<int>c(a);
    int i=0;
    int tmp=0;
    for(;i<a-1;i++){
        if(b[i]!=b[i+1]){
            for(;tmp<=i;tmp++){
                c[tmp]=i+2;
            }
        }
    }
    for(;tmp<a;tmp++){
        c[tmp]=-1;
    }
    for(auto i:c){
        cout<<i<<" ";
    }
    cout<<"\n";
}