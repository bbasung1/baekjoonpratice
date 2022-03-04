#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==0){
        cout<<"0\n";
        return 0;
    }
    int *c=new int(a);
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    int d=1;
    int tmp=0;
    for(int i=0;i<a;i++){
        if(tmp+c[i]>b){
            d++;
            tmp=c[i];
        }else{
            tmp+=c[i];
        }
    }
    cout<<d<<"\n";
}