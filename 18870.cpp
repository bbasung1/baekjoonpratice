#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    cin>>a;
    int *k=new int[a];
    for(int i=0;i<a;i++){
        cin>>k[i];
    }
        for(int i=0;i<a;i++){
            int b=0;
        for(int j=0;j<a;j++){
            if(k[i]>k[j]){
                b++;
            }
        }
        cout<<b<<" ";
    }
    delete []k;
}