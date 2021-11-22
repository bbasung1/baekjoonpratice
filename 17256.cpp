#include <iostream>
using namespace std;
int main(){
    short a[3];
    short b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
        for(int i=0;i<3;i++){
        cin>>b[i];
    }
    cout<<b[0]-a[2]<<" "<<b[1]/a[1]<<" "<<b[2]-a[0]<<"\n";
}