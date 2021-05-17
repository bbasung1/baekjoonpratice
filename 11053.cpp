#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *b=new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int c=0;
    int cnt=0;
    for(int i=0;i<a;i++){
        if(b[i]>c){
            c=b[i];
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    delete []b;
}