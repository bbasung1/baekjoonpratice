#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;
        vector<bool>c(10001,1);
        //vector<int>d;
        c[1]=0;
        for(int i=2;i<=sqrt(10001);i++){
            if(!c[i]){
                continue;
            }
            for(int j=2*i;j<=10001;j+=i){
                c[j]=0;
            }
            //d.push_back(i);
        }
    while(a--){
        int b;
        cin>>b;
            int cnt=0;
            int cnt2=0;
        for(int i=2;i<=b/2;i++){
            if(c[i]&&c[b-i]){
                cnt=i;
                cnt2=b-i;
            }
        }
            cout<<cnt<<" "<<cnt2<<"\n";
    }
}