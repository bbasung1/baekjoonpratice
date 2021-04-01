#include <iostream>
using namespace std;
int main(){
    int a[10001]={0};
    int b;
    cin>>b;
    while(b--){
    int c;
    cin>>c;
    a[c]++;
    //cout<<"a"<<a[c]<<"\n";
}
//cout<<"b"<<a[1]<<"\n";
for(int i=1;i<10001;i++){
    for(int j=0;j<a[i];j++){
        cout<<i<<"\n";
    }
    }
}