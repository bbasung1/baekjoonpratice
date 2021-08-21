#include <iostream>
using namespace std;
int main(){
    int y=0,m=0;
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        y+=(b/30+1)*10;
        m+=(b/60+1)*15;
    }
    //cout<<y<<m<<"\n";
    if(y<m){
        cout<<"Y "<<y<<'\n';
    }
    else if(y>m){
        cout<<"M "<<m<<"\n";
    }
    else{
        cout<<"Y M "<<y<<"\n";
    }
}