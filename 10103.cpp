#include <iostream>
using namespace std;
int main(){
    int a=100,b=100;
    int c;
    cin>>c;
    while(c--){
        int d,e;
        cin>>d>>e;
        if(d==e){
            continue;
        }
        d>e?b-=d:a-=e;
    }
    cout<<a<<" "<<b<<"\n";
}