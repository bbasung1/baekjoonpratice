#include <iostream>
using namespace std;
int main(){
    long long a=0;
    for(int i=0;i<4;i++){
        int b;
        cin>>b;
        a+=b;
    }
    cout<<a/60<<"\n"<<a%60<<"\n";
}