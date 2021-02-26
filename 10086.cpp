#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int c[2]={0};
    for(a;a>0;a--){
        int b;
        cin>>b;
        if(b==0){
            c[0]++;
        }
        else if(b==1){
            c[1]++;
        }
    }
    c[0]>c[1]?cout<<"Junhee is not cute!\n":cout<<"Junhee is cute!\n";
}