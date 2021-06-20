#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    long long b[101]={0,1,1};
    while(a--){
        int c;
        cin>>c;
        if(c>=3){
            for(int i=3;i<=c;i++){
                b[i]=b[i-3]+b[i-2];
            }
        }
            cout<<b[c]<<"\n";
    }
}