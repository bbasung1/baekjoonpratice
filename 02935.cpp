#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[2]={0,0};
    for(int i=0;i<5;i++){
        int b=0;
        for(int j=0;j<4;j++){
            int c=0;
            cin>>c;
            b+=c;
        }
        if(b>a[0]){
            a[0]=b;
            a[1]=i+1;
        }
    }
    cout<<a[1]<<" "<<a[0]<<endl;
}