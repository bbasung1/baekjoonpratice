#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(a;a>0;a--){
        int b;
        string c;
        cin>>b>>c;
        for(int i=0;i<c.length();i++){
            if(i==b-1){
                continue;
            }
            cout<<c[i];
        }
        cout<<"\n";
    }
}