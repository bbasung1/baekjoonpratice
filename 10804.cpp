#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<10;i++){
        int b,c;
        cin>>b>>c;
        reverse(a+(b-1),a+(c));
    }
    for(int i=0;i<20;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}