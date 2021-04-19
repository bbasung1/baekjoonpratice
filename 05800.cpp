#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    short a;
    cin>>a;
    for(short k=1;k<=a;k++){
        short b;
        cin>>b;
        short *c=new short[b];
        for(short i=0;i<b;i++){
            cin>>c[i];
        }
        short e=0;
        sort(c,c+b);
        for(short i=0;i<b-1;i++){
            if(c[i+1]-c[i]>e){
                e=c[i+1]-c[i];
            }
        }
        cout<<"Class "<<k<<"\nMax "<<c[b-1]<<", Min "<<c[0]<<", Largest gap "<<e<<"\n";
        delete []c;
    }
}