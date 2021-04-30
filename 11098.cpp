#include <iostream>
#include  <string>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        string c;
        int d=0;
        while(b--){
            int e;
            string f;
            cin>>e>>f;
            if(d<e){
                d=e;
                c=f;
            }
        }
        cout<<c<<"\n";
    }
}