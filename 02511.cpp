#include <iostream>
using namespace std;
int main(){
    int a[10],b[10];
    int wa=0,wb=0,d=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        cin>>b[i];
    }
    for(int i=0;i<10;i++){
        if(a[i]>b[i]){
            wa+=3;
            d=1;
        }       
        else if(b[i]>a[i]){
            wb+=3;
            d=2;
        }
        else{
            wa++;
            wb++;
        }
}
cout<<wa<<" "<<wb<<"\n";
        if(wa>wb||(wa==wb&&d==1)){
            cout<<"A\n";
        }
        else if(wa<wb||(wa==wb&&d==2)){
            cout<<"B\n";
        }
        else{
            cout<<"D\n";
        }
}