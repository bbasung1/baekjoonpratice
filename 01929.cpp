#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        bool prime=1;
        if(i==1){
            continue;
        }
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
                    if(prime){
                cout<<i<<"\n";
            }
    }
}