#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    int d=0;
    cin>>a;
    for(a;a>0;a--){
        int b,c;
        cin>>b>>c;
        cout<<2*c-b<<" "<<b-c<<endl;//printf("%d %d\n",2*c-b,b-c)
    }
}