#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int b;
    cin>>b;
    int *a=new int[b];
    for(int i=0;i<b;i++){
        cin>>a[i];
    }
    sort(a,a+b);
    for(int i=0;i<b;i++){
        cout<<a[i]<<"\n";
    }
    delete[]a;
}