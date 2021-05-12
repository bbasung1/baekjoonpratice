#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *b=new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    sort(b,b+a,greater<int>());
    int c=0;
    for(int i=0;i<a;i++){
        if(b[i]-i<0){
            break;
        }
        c+=b[i]-i;
    }
    cout<<c;
}