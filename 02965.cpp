#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int tot=0;
    while(1){
        sort(a,a+3);
        if(a[2]-a[1]>a[1]-a[0]){
        if(a[1]+1==a[2]){
            break;
        }
        else{
            a[0]=a[1]+1;
            tot++;
        }
    }
    else{
        if(a[1]-1==a[0]){
            break;
        }
        else{
            a[2]=a[1]-1;
            tot++;
        }
    }
    }
    cout<<tot<<"\n";
}