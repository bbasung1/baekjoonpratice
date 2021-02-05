#include <iostream>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int b=a[0]+a[3];
    int c=a[1]+a[2];
    cout<<(b>c?b-c:c-b)<<endl;
}