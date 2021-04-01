#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    while(a--){
        int b;
        cin>>b;
        for(int i=2;i<=sqrt(b);i++){
            if(b%i==0){
                b=10001;
                break;
            }
        }
        if(b!=10001&&b!=1){
            sum++;
        }
    }
    cout<<sum<<"\n";
}