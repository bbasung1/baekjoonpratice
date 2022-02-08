#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int d=0;
    for(int i=a-1;i>=0;i--){
        if(b[i-1]>=b[i]){
            d+=b[i-1]+1-b[i];
            b[i-1]=b[i]-1;
        }
    }
    cout<<d<<"\n";
}