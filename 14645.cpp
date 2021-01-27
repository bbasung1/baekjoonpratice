#include <iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a>>b;
    c=b;
    for(int i=0;i<a;i++){
        cin>>a>>b;
        c+=(a-b);
    }
    cout<<"비와이";
}