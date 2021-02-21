#include <iostream>
using namespace std;
int main(){
    int sum1=0,sum2=0;
    for(int i=0;i<4;i++){
        int b;
        cin>>b;
        sum1+=b;
    }
    for(int i=0;i<4;i++){
        int b;
        cin>>b;
        sum2+=b;
    }
    sum2>sum1?cout<<sum2<<"\n":cout<<sum1<<"\n";
}