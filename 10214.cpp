#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b=0,c=0;
        for(int i=0;i<9;i++){
            int d,e;
            cin>>d>>e;
            b+=d;
            c+=e;
        }
        b>c?cout<<"Yonsei\n":b==c?cout<<"Draw":cout<<"Korea";
    }
}