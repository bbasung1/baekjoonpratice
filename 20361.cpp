#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<c;++i){
        int d;
        cin>>a>>d;
        if(a==b){
            b=d;
        }
        else if(b==d){
            b=a;
        }
    }
    cout<<b<<endl;
}