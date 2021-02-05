#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    for(n;n>0;n--){
        int a,b;
        cin>>a>>b;
        s+=b%a;
    }
    cout<<s<<endl;
}