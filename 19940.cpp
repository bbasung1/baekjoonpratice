#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int c[5]={0};
        c[0]=b/60;
        b%=60;
        if(b>30){
            c[0]++;
            c[2]+=6-(b/10);
        }
        else{
            c[1]+=b/10;
        }
        b%=10;
        if(b>5){
            c[1]++;
            c[4]+=10-b;
        }
        else{
            c[3]+=b;
        }
        while((c[1]!=0)&&(c[2]!=0)){
            c[1]--;
            c[2]--;
        }
        while((c[3]!=0)&&(c[4]!=0)){
            c[3]--;
            c[4]--;
        }
        for(int i=0;i<4;i++){
            cout<<c[i]<<" ";
        }
        cout<<c[4]<<"\n";
    }
}